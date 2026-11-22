#include <iostream>
#include <numeric>
using namespace std;

/*
Problem 22: Greatest Common Divisor and Least Common Multiple
Given two positive integers A and B, determine their GCD and LCM.

Print the GCD followed by the LCM.

Naa na built in ani na function sa numberic na libraary:
In C++17 and later, you can calculate the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) directly using the built-in std::gcd and std::lcm functions from the <numeric> header.
*/

int main() {
    int a, b;
    cin >> a;
    cin >> b; 
    cout << gcd(a, b) << " " << lcm(a, b);

    return 0;
}

// 12 18	6 36
// 7 13	1 91
// 10 10	10 10
// 24 36	12 72