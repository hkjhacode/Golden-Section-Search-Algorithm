#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
  return x * x * x * x - 14 * x * x * x + 60 * x * x - 70 * x;
}

const double phi = (1 + sqrt(5)) / 2;

double golden_search(double a, double b, double tol) {
  double L = a;
  double R = b;
  double x1 = R - (R - L) / phi;
  double x2 = L + (R - L) / phi;
  double f1 = f(x1);
  double f2 = f(x2);
  int k = 0;

  cout << "Table for Golden Search\n";
  cout << "| K | L | R | X1K | X2K | F(X1K) | F(X2K) |\n";

  while (R - L > tol) {
    cout << "| " << k << " | " << L << " | " << R << " | " << x1 << " | " << x2 << " | " << f1 << " | " << f2 << " |\n";

    if (f1 < f2) {
      R = x2;
      x2 = x1;
      f2 = f1;
      x1 = R - (R - L) / phi;
      f1 = f(x1);
    } else {
      L = x1;
      x1 = x2;
      f1 = f2;
      x2 = L + (R - L) / phi;
      f2 = f(x2);
    }

    k++;
  }

  return (L + R) / 2;
}

int main() {
  int n;
  double c[5], a, b, tol;

  cout << "Degree of Golden Section Function Equation: ";
  cin >> n;

  for (int i = n; i >= 0; i--) {
    cout << "Enter The Coefficient of x Power " << i << ": ";
    cin >> c[i];
  }

  cout << "Your equation: ";

  for (int i = n; i >= 0; i--) {
    if (i == n) {
      cout << c[i] << "x^" << i;
    } else if (i == 0) {
      cout << " + " << c[i];
    } else {
      cout << " + " << c[i] << "x^" << i;
    }
  }

  cout << endl;

  cout << "Enter Range of x initial to final: ";
  cin >> a >> b;

  cout << "Golden section search algorithm:\n";
  cout << "Enter smaller length of Search Interval: ";
  cin >> tol;

  double result = golden_search(a, b, tol);

  cout << "Minimum Value for X: " << result << endl;
  cout << "And f(x) is: " << f(result) << endl;

  return 0;
}
