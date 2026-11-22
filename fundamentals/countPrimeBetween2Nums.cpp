#include <iostream>
using namespace std;

bool isPrimeN(int N) {
    if (N <= 1) return false;
    int i = 2;
    while (i * i <= N) {
        if (N % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a; 
    cin >> b;
    int countPrime = 0;
    for (int i = a; i <= b; i++) {
        if (isPrimeN(i)) countPrime++;
    }

    cout << countPrime << endl;

    return 0;
}

// 1 10	4
// 10 30	6
// 20 25	0 --> sayop ang chatgpt ani kay ang 23 prime man...
// 2 2	1
// 50 60	2