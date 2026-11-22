#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string isPalindromeN(int N) {
    string N_string = to_string(N);    //convert N to string
    reverse(N_string.begin(), N_string.end());   //then reverse in place
    return N_string == to_string(N) ? "YES" : "NO";  //check if reverse is read same as N as string
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << isPalindromeN(N) << endl;
    }



    // cout << isPalindromeN(121);         //YES
    // cout << endl;
    // cout << isPalindromeN(123);         //NO
    // cout << endl;
    // cout << isPalindromeN(1221);         //YES
    // cout << endl;
    // cout << isPalindromeN(7);           //YES
    // cout << endl;
    // cout << isPalindromeN(100);           //NO
    // cout << endl;


    return 0;

}