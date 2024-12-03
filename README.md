# Integer Overflow Bug in C
This repository demonstrates a simple C program that is vulnerable to integer overflow. Integer overflow occurs when an arithmetic operation results in a value that is too large or too small to be represented by the data type used to store the result. This can lead to unexpected behavior and security vulnerabilities.

## Bug Description
The `bug.c` file contains a C program that initializes an integer variable `x` to 10 and then assigns a value to it through a pointer. However, if the value assigned through the pointer is too large, it can result in an integer overflow.

## Bug Solution
The `bugSolution.c` file provides a solution to this problem by adding input validation to prevent integer overflow.  The solution checks if the input is within the range that can be safely stored before assigning the input value. 