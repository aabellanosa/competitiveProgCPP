#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;     //pila kabuok

    int num;
    cin >> num;   //ang pirmero na number
    int maxNum = num; //assume pinaka taas
    int minNum = num; // assume pinaka mubo

    for (int i = 1; i < n; i++) {
        int nextNum;
        cin >> nextNum;
        if (nextNum > maxNum) maxNum = nextNum;
        if (nextNum < minNum) minNum = nextNum;
    }

    cout << maxNum << " " << minNum << endl;

    return 0;
}

// 5 / 4 9 2 15 6	15 2
// 4 / 1 1 1 1	1 1
// 3 / -5 -2 -9	-2 -9
// 1 / 100