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
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << (isPrimeN(N) ? "PRIME" : "NOT PRIME") << endl;


    }

    // cout << (isPrimeN(7) ? "PRIME" : "NOT PRIME");  //PRIME
    // cout << endl;
    // cout << (isPrimeN(9) ? "PRIME" : "NOT PRIME");  //NOT PRIME
    // cout << endl;
    // cout << (isPrimeN(1) ? "PRIME" : "NOT PRIME");  //NOT PRIME
    // cout << endl;
    // cout << (isPrimeN(25) ? "PRIME" : "NOT PRIME");  //NOT PRIME
    // cout << endl;
    // cout << (isPrimeN(97) ? "PRIME" : "NOT PRIME");  //PRIME
    // cout << endl;


    return 0;
}