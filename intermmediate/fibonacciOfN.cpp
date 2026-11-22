#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 0) {
        cout << 0;
        return 0;
    }
    if (N == 1) {
        cout << 1;
        return 0;
    }
    int fibo = 0;
    int prev = 0;
    int next = 1;
    for (int i = 2; i <= N; i++) {
        fibo = next + prev;
        prev = next;
        next = fibo;

    }
    cout << fibo << endl;

    return 0;

}

// 0	0
// 1	1
// 5	5
// 10	55
// 20	6765
//   1 2 3 4 5  --> trace
// 0 1 1 2 3 5

