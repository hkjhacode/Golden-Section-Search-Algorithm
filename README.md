# Golden-Section-Search-Algorithm
Golden-Section-Search-Algorithm is a C++ program that implements the golden section search algorithm for finding the minimum point of a polynomial function. It provides an efficient and reliable method for numerical optimization, allowing users to accurately determine the minimum value within a specified range.

This C++ program implements the **golden section search algorithm** for finding the minimum point of a polynomial function.

## Description

The **golden section search algorithm** is a numerical optimization method used to find the minimum (or maximum) point of a unimodal function within a given interval. The algorithm divides the search interval into two subintervals using two interior points calculated using the golden ratio. By comparing the function values at these points, the search interval is updated until it reaches a specified tolerance.

## How to Use

1. **Compile and Run**: To run this program, you need to have a C++ compiler installed on your system. Use any IDE or text editor to edit and compile the code. Alternatively, you can use an online compiler such as [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler). 

2. **Input**: The program prompts you to enter the degree, coefficients, range, and tolerance of the polynomial function.

3. **Output**: The program displays the equation, performs the golden section search algorithm, and prints a table showing the iteration values. It then provides the minimum value of X and the corresponding value of the function.

## Example

Suppose we have a polynomial function: f(x) = x^4 - 14x^3 + 60x^2 - 70x

**Input**:
- Degree of Golden Section Function Equation: 4
- Coefficients: 1, -14, 60, -70, 0
- Range of x: 0 to 2
- Tolerance: 0.05

**Output**:

```
Table for Golden Search
| K | L | R | X1K | X2K | F(X1K) | F(X2K) |
| 0 | 0 | 2 | 0.763932 | 1.23607 | -24.3608 | -18.9596 |
| 1 | 0 | 1.23607 | 0.472138 | 0.763932 | -21.0989 | -24.3608 |
| 2 | 0.472138 | 1.23607 | 0.763968 | 0.944241 | -24.3608 | -23.593 |
| 3 | 0.472138 | 0.944241 | 0.652411 | 0.763968 | -23.8375 | -24.3608 |
| 4 | 0.652411 | 0.944241 | 0.763984 | 0.832668 | -24.3608 | -24.288 |
| 5 | 0.652411 | 0.832668 | 0.721095 | 0.763984 | -24.2579 | -24.3608 |
| 6 | 0.721095 | 0.832668 | 0.763999 | 0.789764 | -24.3608 | -24.3669 |
| 7 | 0.763999 | 0.832668 | 0.789762 | 0.806905 | -24.3669 | -24.3496 |
| 8 | 0.763999 | 0.806905 | 0.780142 | 0.789762 | -24.3696 | -24.3669 |

Minimum Value for X: 0.785452
And f(x) is: -24.3696
```

## Contributions

Contributions to this project are welcome. Feel free to fork the repository, make improvements and create pull requests to contribute to the code.
