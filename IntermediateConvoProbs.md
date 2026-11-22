# **C++ Competitive Programming – Intermediate Problem Set**

Intermediate

20 Problems

C++17

Online Judge Format

This set builds upon the previous 15 beginner problems, retaining the same four categories but introducing more challenging algorithms, mathematical reasoning, loops, and array operations.

All problems follow **competitive programming conventions**: read input using `cin`, print results using `cout`, and do not hardcode test cases. You may create helper functions whenever appropriate.

No solutions are provided so you can practice independently.

## **Level 1 – Conditional Logic and Arithmetic**

### **Problem 16: Triangle Validator and Classifier**

Given three integers representing the lengths of a triangle's sides, determine whether they form a valid triangle. If valid, classify it as `EQUILATERAL`, `ISOSCELES`, or `SCALENE`. Otherwise, print `INVALID`.

**Input**

```
5 5 8
```

**Output**

```
ISOSCELES
```

| Test input | Expected output |
| ---------- | --------------- |
| `5 5 5`    | `EQUILATERAL`   |
| `3 4 5`    | `SCALENE`       |
| `1 2 3`    | `INVALID`       |
| `7 7 10`   | `ISOSCELES`     |
| `0 5 5`    | `INVALID`       |

Constraints: \\(0 \leq A,B,C \leq 10^9\\)

### **Problem 17: Electricity Bill Calculator**

An electricity provider uses progressive billing:

| Consumption     | Rate per unit |
| --------------- | ------------- |
| First 100 units | ₱5            |
| Next 100 units  | ₱7            |
| Above 200 units | ₱10           |

Given the number of units consumed, calculate the total bill. Each rate applies only to units within its bracket.

**Input**

```
250
```

**Output**

```
1700
```

| Test input | Expected output |
| ---------- | --------------- |
| `50`       | `250`           |
| `100`      | `500`           |
| `150`      | `850`           |
| `200`      | `1200`          |
| `300`      | `2200`          |

Constraints: \\(0 \leq N \leq 10^6\\)

### **Problem 18: Second Largest Distinct Number**

Given four integers, determine the second-largest **distinct** value. If fewer than two distinct values exist, print `NONE`.

**Input**

```
10 30 20 40
```

**Output**

```
30
```

| Test input    | Expected output |
| ------------- | --------------- |
| `5 5 3 2`     | `3`             |
| `10 10 10 10` | `NONE`          |
| `-1 -5 -3 -2` | `-2`            |
| `8 4 8 6`     | `6`             |

Constraints: Each value is between \\(-10^9\\) and \\(10^9\\).

### **Problem 19: Date Validator**

Given three integers representing day, month, and year, determine whether they form a valid Gregorian calendar date.

Remember to consider leap years.

**Input**

```
29 2 2024
```

**Output**

```
VALID
```

| Test input  | Expected output |
| ----------- | --------------- |
| `29 2 2024` | `VALID`         |
| `29 2 2023` | `INVALID`       |
| `31 4 2025` | `INVALID`       |
| `28 2 1900` | `VALID`         |
| `29 2 2000` | `VALID`         |

Constraints: \\(1 \leq Y \leq 9999\\)

### **Problem 20: Minimum Number of Banknotes**

Given an amount N, determine the minimum number of banknotes required using denominations of 1000, 500, 200, 100, 50, and 20.

If the amount cannot be represented exactly, print `IMPOSSIBLE`.

**Input**

```
1870
```

**Output**

```
6
```

Explanation: 1000 + 500 + 200 + 100 + 50 + 20 = 1870.

| Test input | Expected output |
| ---------- | --------------- |
| `1000`     | `1`             |
| `1870`     | `6`             |
| `40`       | `2`             |
| `30`       | `IMPOSSIBLE`    |
| `0`        | `0`             |

Constraints: \\(0 \leq N \leq 10^6\\)

## **Level 2 – Loops and Repetition**

### **Problem 21: Fibonacci Number**

Given N, calculate the Nth Fibonacci number.

The sequence begins with \\(F_0=0\\), \\(F_1=1\\), and each succeeding number is the sum of the previous two.

**Input**

```
10
```

**Output**

```
55
```

| Test input | Expected output |
| ---------- | --------------- |
| `0`        | `0`             |
| `1`        | `1`             |
| `5`        | `5`             |
| `10`       | `55`            |
| `20`       | `6765`          |

Constraints: \\(0 \leq N \leq 90\\)

### **Problem 22: Greatest Common Divisor and Least Common Multiple**

Given two positive integers A and B, determine their GCD and LCM.

Print the GCD followed by the LCM.

**Input**

```
12 18
```

**Output**

```
6 36
```

| Test input | Expected output |
| ---------- | --------------- |
| `12 18`    | `6 36`          |
| `7 13`     | `1 91`          |
| `10 10`    | `10 10`         |
| `24 36`    | `12 72`         |

Constraints: \\(1 \leq A,B \leq 10^9\\)

### **Problem 23: Count Prime Numbers in a Range**

Given two integers L and R, count how many prime numbers exist in the inclusive range [L, R].

**Input**

```
10 30
```

**Output**

```
6
```

| Test input | Expected output |
| ---------- | --------------- |
| `1 10`     | `4`             |
| `10 30`    | `6`             |
| `20 25`    | `0`             |
| `2 2`      | `1`             |
| `50 60`    | `2`             |

Constraints: \\(1 \leq L \leq R \leq 10^6\\)

### **Problem 24: Collatz Sequence**

Given a positive integer N, repeatedly perform the following operations:

- If N is even, divide it by 2.
- If N is odd, multiply it by 3 and add 1.
- Continue until N becomes 1.

Print the number of operations performed.

**Input**

```
6
```

**Output**

```
8
```

| Test input | Expected output |
| ---------- | --------------- |
| `1`        | `0`             |
| `2`        | `1`             |
| `3`        | `7`             |
| `6`        | `8`             |
| `10`       | `6`             |

Constraints: \\(1 \leq N \leq 10^6\\). Use 64-bit integers for intermediate calculations.

### **Problem 25: Number Pyramid**

Given N, print a centered number pyramid with N rows. Row i contains the numbers from 1 through i and back to 1, separated by single spaces. Use two leading spaces per missing pyramid level.

**Input**

```
4
```

**Output**

```
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
```

Constraints: \\(1 \leq N \leq 9\\)

## **Level 3 – Mathematical and Number Logic**

### **Problem 26: Armstrong Number Checker**

An Armstrong number is a nonnegative integer equal to the sum of its digits, each raised to the power of the number of digits.

For example:

\\(153 = 1^3 + 5^3 + 3^3\\)

**Input**

```
153
```

**Output**

```
YES
```

| Test input | Expected output |
| ---------- | --------------- |
| `153`      | `YES`           |
| `370`      | `YES`           |
| `9474`     | `YES`           |
| `123`      | `NO`            |
| `10`       | `NO`            |

Constraints: \\(0 \leq N \leq 10^9\\)

### **Problem 27: Perfect Number**

A perfect number equals the sum of its positive divisors excluding itself.

For example, 28 is perfect because:

\\(1+2+4+7+14=28\\)

**Input**

```
28
```

**Output**

```
PERFECT
```

| Test input | Expected output |
| ---------- | --------------- |
| `6`        | `PERFECT`       |
| `28`       | `PERFECT`       |
| `12`       | `NOT PERFECT`   |
| `1`        | `NOT PERFECT`   |
| `496`      | `PERFECT`       |

Constraints: \\(1 \leq N \leq 10^9\\)

### **Problem 28: Decimal to Binary Conversion**

Given a nonnegative decimal integer N, convert it to binary without using built-in binary conversion functions.

**Input**

```
13
```

**Output**

```
1101
```

| Test input | Expected output |
| ---------- | --------------- |
| `0`        | `0`             |
| `5`        | `101`           |
| `8`        | `1000`          |
| `13`       | `1101`          |
| `255`      | `11111111`      |

Constraints: \\(0 \leq N \leq 10^9\\)

### **Problem 29: Trailing Zeros in Factorial**

Given N, determine how many trailing zeros appear in \\(N!\\).

For example, \\(10! = 3628800\\), which contains two trailing zeros.

**Input**

```
10
```

**Output**

```
2
```

| Test input | Expected output |
| ---------- | --------------- |
| `5`        | `1`             |
| `10`       | `2`             |
| `20`       | `4`             |
| `25`       | `6`             |
| `100`      | `24`            |

Constraints: \\(0 \leq N \leq 10^9\\)

### **Problem 30: Modular Exponentiation**

Given three integers A, B, and M, calculate:

\\[ (A^B)\bmod M \\]

Your solution must work efficiently even for very large B.

**Input**

```
2 10 1000
```

**Output**

```
24
```

| Test input  | Expected output |
| ----------- | --------------- |
| `2 10 1000` | `24`            |
| `3 4 5`     | `1`             |
| `5 0 7`     | `1`             |
| `10 3 6`    | `4`             |

Constraints: \\(0 \leq A,B \leq 10^9\\), \\(1 \leq M \leq 10^9\\)

## **Level 4 – Arrays and Searching**

### **Problem 31: Second Largest Distinct Array Element**

Given N integers, find the second-largest distinct element. If none exists, print `NONE`.

**Input**

```
6
10 30 20 40 40 15
```

**Output**

```
30
```

| Test input (N / elements) | Expected output |
| ------------------------- | --------------- |
| `5 / 1 2 3 4 5`           | `4`             |
| `5 / 9 9 9 9 9`           | `NONE`          |
| `4 / -5 -2 -8 -1`         | `-2`            |
| `6 / 10 30 20 40 40 15`   | `30`            |

Constraints: \\(1 \leq N \leq 10^5\\)

### **Problem 32: Rotate an Array to the Right**

Given an array of N integers and an integer K, rotate the array K positions to the right.

**Input**

```
5 2
1 2 3 4 5
```

**Output**

```
4 5 1 2 3
```

| Test input        | Expected output |
| ----------------- | --------------- |
| `5 1 / 1 2 3 4 5` | `5 1 2 3 4`     |
| `5 2 / 1 2 3 4 5` | `4 5 1 2 3`     |
| `4 4 / 1 2 3 4`   | `1 2 3 4`       |
| `3 5 / 10 20 30`  | `20 30 10`      |

Constraints: \\(1 \leq N \leq 10^5\\), \\(0 \leq K \leq 10^9\\)

### **Problem 33: Remove Duplicate Elements**

Given an array of N integers, print the unique elements in their original order of first appearance.

**Input**

```
8
4 2 4 3 2 5 3 6
```

**Output**

```
4 2 3 5 6
```

| Test input        | Expected output |
| ----------------- | --------------- |
| `5 / 1 1 2 2 3`   | `1 2 3`         |
| `4 / 5 5 5 5`     | `5`             |
| `6 / 3 1 3 2 1 4` | `3 1 2 4`       |

Constraints: \\(1 \leq N \leq 10^5\\)

### **Problem 34: Maximum Subarray Sum**

Given an array containing positive and negative integers, find the maximum possible sum of a nonempty contiguous subarray.

**Input**

```
8
-2 -3 4 -1 -2 1 5 -3
```

**Output**

```
7
```

Explanation: The subarray `4 -1 -2 1 5` has a sum of 7.

| Test input                 | Expected output |
| -------------------------- | --------------- |
| `5 / 1 2 3 4 5`            | `15`            |
| `4 / -5 -2 -8 -1`          | `-1`            |
| `5 / 2 -1 3 -2 4`          | `6`             |
| `8 / -2 -3 4 -1 -2 1 5 -3` | `7`             |

Constraints: \\(1 \leq N \leq 10^5\\), \\(-10^9 \leq A_i \leq 10^9\\)

### **Problem 35: Pair Sum**

Given an array of N integers and a target X, determine whether two elements at **different indices** have a sum equal to X.

Print `YES` or `NO`.

**Input**

```
5 9
2 7 11 15 1
```

**Output**

```
YES
```

| Test input          | Expected output |
| ------------------- | --------------- |
| `5 9 / 2 7 11 15 1` | `YES`           |
| `4 10 / 1 2 3 4`    | `NO`            |
| `4 6 / 3 3 5 1`     | `YES`           |
| `1 10 / 10`         | `NO`            |

Constraints: \\(1 \leq N \leq 10^5\\), \\(-10^9 \leq A_i,X \leq 10^9\\)

## **Recommended training progression**

**Your progress**

0 of 20 completed

Conditional Logic

Problems 16–20

16

17

18

19

20

Loops and Repetition

Problems 21–25

21

22

23

24

25

Number Logic

Problems 26–30

26

27

28

29

30

Arrays and Searching

Problems 31–35

31

32

33

34

35

Reset progress

## **Suggested competition rules**

For this intermediate set, I recommend adopting the following conditions:

- **Language:** C++17
- **Input:** Standard input (`cin`)
- **Output:** Standard output (`cout`)
- **Time limit:** 1–2 seconds per problem as a practice target
- **Memory limit:** 256 MB
- **Functions:** Allowed and encouraged
- **Hardcoded test cases:** Not allowed in submitted solutions
- **Output formatting:** Exact match, with no prompts such as `Enter a number:`

The problems are arranged from moderately challenging to more algorithmic. In particular, Problems 23, 29, 30, 34, and 35 are excellent introductions to efficient competitive programming techniques.

**Recommended next step:** Solve Problems 16–20 using your existing function-based approach, but have `main()` obtain all inputs through `cin`. This will help reinforce the distinction between algorithm implementation and online judge input handling.