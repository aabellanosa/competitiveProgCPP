#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int reverseDigits(int N) {
    string N_string = to_string(N < 0 ? -N : N); //remove negative sign
    reverse(N_string.begin(), N_string.end());   //reverse the string in place

    return stoi(N_string);                     //string to integer
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;
        cout << reverseDigits(N) << endl;
    }

//     12345	54321
//     100	1
//     9876	6789
//     7	7
//     1200	21


    return 0;
}