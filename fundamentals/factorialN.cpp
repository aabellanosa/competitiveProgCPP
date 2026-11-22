#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << 1;
        return 0;
    }

    int fac = 1;

    for (int i = 1; i <= N; i++) {
        fac *= i;
    }

    cout << fac;

    return 0;
}

// 0	1
// 1	1
// 3	6
// 5	120
// 10	3628800