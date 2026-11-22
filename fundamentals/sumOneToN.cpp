#include <iostream>
using namespace std;

int sumOneToN(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << sumOneToN(N) << endl;
    }


    // cout << sumOneToN(5);   //	15
    // cout << endl;
    // cout << sumOneToN(10);   //	55
    // cout << endl;
    // cout << sumOneToN(1);   //	1
    // cout << endl;
    // cout << sumOneToN(100);   //	5050
    // cout << endl;

    return 0;
}