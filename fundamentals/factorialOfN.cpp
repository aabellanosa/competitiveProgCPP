#include <iostream>
using namespace std;

int factorialOfN(int N) {
    if (N <= 1) return 1;
    int fac = 1;
    for (int i = 1; i <= N; i++) {
        fac *= i;
    }
    return fac;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << factorialOfN(N) << endl;
    }

    // cout << factorialOfN(0);    //	1
    // cout << endl;
    // cout << factorialOfN(1);    //	1
    // cout << endl;
    // cout << factorialOfN(3);    //	6
    // cout << endl;
    // cout << factorialOfN(5);    //	120
    // cout << endl;
    // cout << factorialOfN(10);    //	3628800
    // cout << endl;

    return 0;
}