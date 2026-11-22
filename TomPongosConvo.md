Great! If your goal is to compete in **competitive programming using C++**, I recommend starting with fundamental problems that build your logic, problem-solving skills, and familiarity with C++.

We'll approach this like a beginner-friendly competitive programming training set.

**Rules for this practice:**

- You solve each problem independently using C++.
- I'll provide the problem descriptions, constraints, sample inputs, and expected outputs.
- I won't reveal the solutions or code yet.
- You can send me your code afterward, and I'll check its correctness, logic, and efficiency.

# **C++ Competitive Programming – Beginner Problem Set**

Beginner

15 Problems

C++17

## **Level 1: Basic Input, Output, and Arithmetic**

These problems teach you how to receive input, display output, and perform basic mathematical operations.

### **Problem 1 – Sum of Two Numbers**

**Task:** Given two integers, calculate and print their sum.

**Input:**

```
5 7
```

**Output:**

```
12
```

**Test cases:**

| Input   | Expected output |
| ------- | --------------- |
| `5 7`   | `12`            |
| `10 20` | `30`            |
| `-5 8`  | `3`             |
| `0 0`   | `0`             |

**Constraints:**

\- \\(-10^9 \leq A,B \leq 10^9\\)

### **Problem 2 – Even or Odd**

**Task:** Given an integer N, determine whether it is EVEN or ODD.

**Input:**

```
7
```

**Output:**

```
ODD
```

**Test cases:**

| Input | Expected output |
| ----- | --------------- |
| `4`   | `EVEN`          |
| `7`   | `ODD`           |
| `0`   | `EVEN`          |
| `-3`  | `ODD`           |
| `100` | `EVEN`          |

**Constraints:**

\- \\(-10^9 \leq N \leq 10^9\\)

### **Problem 3 – Largest of Three Numbers**

**Task:** Given three integers A, B, and C, print the largest number.

**Input:**

```
12 45 30
```

**Output:**

```
45
```

**Test cases:**

| Input        | Expected output |
| ------------ | --------------- |
| `12 45 30`   | `45`            |
| `5 5 2`      | `5`             |
| `-10 -5 -20` | `-5`            |
| `8 8 8`      | `8`             |

### **Problem 4 – Simple Calculator**

**Task:** Given two numbers and an operator, perform the requested operation.

Supported operators:

- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Integer division

**Input:**

```
10 5 *
```

**Output:**

```
50
```

**Test cases:**

| Input    | Expected output |
| -------- | --------------- |
| `10 5 +` | `15`            |
| `10 5 -` | `5`             |
| `10 5 *` | `50`            |
| `20 4 /` | `5`             |
| `7 2 /`  | `3`             |

**Constraints:**

- Division by zero will not occur.
- All calculations fit within a 64-bit integer.

## **Level 2: Loops and Repetition**

These problems introduce `for`, `while`, and repetitive calculations.

### **Problem 5 – Sum from 1 to N**

**Task:** Given an integer N, calculate the sum of all integers from 1 through N.

**Input:**

```
5
```

**Output:**

```
15
```

Explanation: \\(1+2+3+4+5=15\\)

**Test cases:**

| Input | Expected output |
| ----- | --------------- |
| `5`   | `15`            |
| `10`  | `55`            |
| `1`   | `1`             |
| `100` | `5050`          |

**Constraints:**

\- \\(1 \leq N \leq 10^6\\)

### **Problem 6 – Multiplication Table**

**Task:** Given an integer N, print its multiplication table from 1 to 10.

**Input:**

```
3
```

**Output:**

```
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30
```

**Test cases:**

| Input | Expected first and last lines   |
| ----- | ------------------------------- |
| `2`   | `2 x 1 = 2` / `2 x 10 = 20`     |
| `5`   | `5 x 1 = 5` / `5 x 10 = 50`     |
| `10`  | `10 x 1 = 10` / `10 x 10 = 100` |

### **Problem 7 – Factorial**

**Task:** Given a nonnegative integer N, calculate its factorial.

Factorial means multiplying all positive integers from 1 to N.

For example:

\\(5! = 5 \times 4 \times 3 \times 2 \times 1 = 120\\)

**Input:**

```
5
```

**Output:**

```
120
```

**Test cases:**

| Input | Expected output |
| ----- | --------------- |
| `0`   | `1`             |
| `1`   | `1`             |
| `3`   | `6`             |
| `5`   | `120`           |
| `10`  | `3628800`       |

**Constraints:**

\- \\(0 \leq N \leq 20\\)

### **Problem 8 – Count the Digits**

**Task:** Given an integer N, determine how many digits it contains.

**Input:**

```
12345
```

**Output:**

```
5
```

**Test cases:**

| Input    | Expected output |
| -------- | --------------- |
| `12345`  | `5`             |
| `9`      | `1`             |
| `100000` | `6`             |
| `-123`   | `3`             |
| `0`      | `1`             |

**Constraints:**

\- \\(-10^{18} \leq N \leq 10^{18}\\)

## **Level 3: Number Logic**

These problems help develop the mathematical thinking frequently required in programming competitions.

### **Problem 9 – Reverse a Number**

**Task:** Given an integer N, reverse its digits and print the resulting number.

**Input:**

```
12345
```

**Output:**

```
54321
```

**Test cases:**

| Input   | Expected output |
| ------- | --------------- |
| `12345` | `54321`         |
| `100`   | `1`             |
| `9876`  | `6789`          |
| `7`     | `7`             |
| `1200`  | `21`            |

### **Problem 10 – Palindrome Number**

**Task:** Determine whether a given nonnegative integer reads the same forward and backward.

Print `YES` if it is a palindrome and `NO` otherwise.

**Input:**

```
121
```

**Output:**

```
YES
```

**Test cases:**

| Input  | Expected output |
| ------ | --------------- |
| `121`  | `YES`           |
| `123`  | `NO`            |
| `1221` | `YES`           |
| `7`    | `YES`           |
| `100`  | `NO`            |

### **Problem 11 – Prime Number Checker**

**Task:** Given an integer N, determine whether it is a prime number.

A prime number is a number greater than 1 that has exactly two positive divisors: 1 and itself.

Print `PRIME` or `NOT PRIME`.

**Input:**

```
17
```

**Output:**

```
PRIME
```

**Test cases:**

| Input | Expected output |
| ----- | --------------- |
| `2`   | `PRIME`         |
| `7`   | `PRIME`         |
| `9`   | `NOT PRIME`     |
| `1`   | `NOT PRIME`     |
| `25`  | `NOT PRIME`     |
| `97`  | `PRIME`         |

**Constraints:**

\- \\(1 \leq N \leq 10^9\\)

## **Level 4: Arrays**

Arrays are extremely important in competitive programming. Many competition problems involve processing collections of numbers.

### **Problem 12 – Find the Maximum and Minimum**

**Task:** Given N integers, find the largest and smallest elements.

**Input:**

```
5
4 9 2 15 6
```

**Output:**

```
15 2
```

**Test cases:**

| Input            | Expected output |
| ---------------- | --------------- |
| `5 / 4 9 2 15 6` | `15 2`          |
| `4 / 1 1 1 1`    | `1 1`           |
| `3 / -5 -2 -9`   | `-2 -9`         |
| `1 / 100`        | `100 100`       |

**Constraints:**

\- \\(1 \leq N \leq 10^5\\)

### **Problem 13 – Sum of Array Elements**

**Task:** Given N integers, calculate their total sum.

**Input:**

```
5
1 2 3 4 5
```

**Output:**

```
15
```

**Test cases:**

| Input             | Expected output |
| ----------------- | --------------- |
| `5 / 1 2 3 4 5`   | `15`            |
| `4 / 10 10 10 10` | `40`            |
| `3 / -5 5 10`     | `10`            |
| `1 / 100`         | `100`           |

### **Problem 14 – Count Even and Odd Elements**

**Task:** Given an array of N integers, count how many elements are even and how many are odd.

Print the even count followed by the odd count.

**Input:**

```
6
1 2 3 4 5 6
```

**Output:**

```
3 3
```

**Test cases:**

| Input             | Expected output |
| ----------------- | --------------- |
| `6 / 1 2 3 4 5 6` | `3 3`           |
| `4 / 2 4 6 8`     | `4 0`           |
| `3 / 1 3 5`       | `0 3`           |
| `5 / 0 1 2 3 4`   | `3 2`           |

### **Problem 15 – Linear Search**

**Task:** Given an array of N integers and a target X, determine whether X exists in the array.

Print the **0-based index of its first occurrence**, or `-1` if it doesn't exist.

**Input:**

```
5 8
10 20 30 40 50
```

**Output:**

```
-1
```

**Test cases:**

| Input                   | Expected output |
| ----------------------- | --------------- |
| `5 30 / 10 20 30 40 50` | `2`             |
| `5 10 / 10 20 30 40 50` | `0`             |
| `5 50 / 10 20 30 40 50` | `4`             |
| `5 99 / 10 20 30 40 50` | `-1`            |
| `5 2 / 1 2 2 3 4`       | `1`             |

# **Your training roadmap**

Here's the recommended order for mastering the fundamentals before moving into harder competition problems.

## **Beginner learning progression**

1. **Week 1 – C++ Fundamentals**

   Problems 1–4

   Variables, data types, cin, cout, operators, if/else.
2. **Week 2 – Loops**

   Problems 5–8

   For loops, while loops, counters, accumulators.
3. **Week 3 – Mathematical Logic**

   Problems 9–11

   Digit manipulation, modulo, divisibility, prime checking.
4. **Week 4 – Arrays**

   Problems 12–15

   Array traversal, searching, minimum, maximum, counting.

## **How to practice like a competitive programmer**

For every problem, follow these five steps:

1. **Understand:** Identify what the problem asks you to calculate.
2. **Analyze:** Think of the algorithm before writing code.
3. **Implement:** Write your solution using C++.
4. **Test:** Run the provided test cases and create additional edge cases.
5. **Optimize:** Consider whether your solution can be made faster or use less memory.

## **Your C++ submission template**

Use this as your starting template for every exercise:

```

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code goes here

    return 0;
}

```

## **How I'll evaluate your submissions**

When you send me your code, I'll evaluate it using these criteria:

| Criteria         | What I'll check                      |
| ---------------- | ------------------------------------ |
| Correctness      | Does it produce the expected output? |
| Logic            | Is your approach logically sound?    |
| Edge cases       | Does it handle unusual inputs?       |
| Time complexity  | Is it fast enough?                   |
| Space complexity | Does it use memory efficiently?      |
| C++ practices    | Are you using C++ correctly?         |

I won't immediately give you the corrected code if you make a mistake. I'll first give you hints so you can discover and fix the problem yourself.

Start here

# **Your first challenge: Problem 1**

Write a C++ program that reads two integers and prints their sum.

**Your goal:** Solve it without looking up a solution.

Once finished, send me your C++ code. I'll review it like a competitive programming coach, explain any mistakes, and give you Problem 2 when you're ready.

**One important piece of advice:** Don't rush through all 15 problems. Focus on understanding *why* your code works, not just getting the correct output. That's how you develop the problem-solving skills needed for programming competitions.