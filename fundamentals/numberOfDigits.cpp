#include <iostream>
#include <string>
using namespace std;

int numberOfDigits(int N) {
    string N_string = to_string(N < 0 ? -N : N); //remove negative sign
    return N_string.length();  //how many chars in string
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;
        cout << numberOfDigits(N) << endl;
    }



    // cout << numberOfDigits(12345);              // 5
    // cout << endl;
    // cout << numberOfDigits(9);                  // 1
    // cout << endl;
    // cout << numberOfDigits(100000);             // 6
    // cout << endl;
    // cout << numberOfDigits(-123);               // 3
    // cout << endl;
    // cout << numberOfDigits(0);                  // 1
    // cout << endl;

    return 0;
}