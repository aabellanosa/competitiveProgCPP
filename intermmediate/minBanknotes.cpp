#include <iostream>
using namespace std;

/*
Problem 20: Minimum Number of Banknotes
Given an amount N, determine the minimum number of banknotes required using denominations of 1000, 500, 200, 100, 50, and 20.

If the amount cannot be represented exactly, print IMPOSSIBLE.
*/

int main() {
    int N;
    cin >> N;
    int billCount = 0;
    if (N == 0) {
        cout << 0;
        return 0; 
    }
    int denom[6] = {1000, 500, 200, 100, 50, 20};

    for (int i = 0; i < 6; i++) {
        int rem = N % denom[i];
        int quotient = N / denom[i];

        billCount += quotient;

        if (rem > 0) {
            N = rem;
        } else {
            cout << billCount;
            return 0;
        }
    }

    if (N > 0) {
        cout << "IMPOSSIBLE";
    } else {
        cout << billCount;
    }


    return 0;
}

//1000	1
//1870	6
//40	2
//30	IMPOSSIBLE
//0	0