#include <iostream>
using namespace std;

//knowledge to have: 
//a valid triangle with different sides should obey
//total sa duha ka mugbo > pinakataas

int largestOfThree(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int A;
    cin >> A;
    int B;
    cin >> B;
    int C;
    cin >> C;

    //edge-case test -> way triangle nga naay 0 nga side
    if (A == 0 || B == 0 || C == 0) {
        cout << "INVALID";
        return 0;
    }

    //rehas ang tulo ka sides
    if (A == B && B == C) {
        cout << "EQUILATERAL";
        return 0;
    }

    //rehas ang duha ka sides
    if (A == B || B == C || C == A) {
        cout << "ISOSCELES";
        return 0;
    }

    //total sa duha ka mugbo > pinakataas para valid na triangle
    int maxSide = largestOfThree(A, B, C);
 
    if (maxSide == A && B + C > A) {
            cout << "SCALENE";
            return 0;
    } else if (maxSide == B && A + C > B) {
            cout << "SCALENE";
            return 0;
    } else if (maxSide == C && A + B > C) {
            cout << "SCALENE";
            return 0;
    }

    cout << "INVALLID";

    return 0;
}

// 5 5 5	EQUILATERAL
// 3 4 5	SCALENE
// 1 2 3	INVALID
// 7 7 10	ISOSCELES
// 0 5 5	INVALID
