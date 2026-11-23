#include <iostream>
#include <string>
using namespace std;
/*
Given N, print a centered number pyramid with N rows. Row i contains the numbers from 1 through i and back to 1, separated by single spaces. Use two leading spaces per missing pyramid level.

input:
4
output:
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

nag lisod ko ani.. abot og 1 day kapin...

*/

int main() {
    int N;
    cin >> N;

    string pyramid = "";
    for (int i = 1; i <= N; i++) {
        int times = 2 * (N - i);
        string blanks(times, ' ');
        pyramid += blanks;
        int j;
        for (int j = 1; j <= i; j++) {
            pyramid += to_string(j) + " ";
        }
        for (int k = i - 1; k >= 1; k--) {
            pyramid += to_string(k) + " ";
        }
        pyramid += '\n';
    }

    cout << pyramid;


    return 0;
}
