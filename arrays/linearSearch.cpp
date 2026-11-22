#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;     //pila kabuok pangitaan
    int X;
    cin >> X;       //ang hanapon

    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        if (elem == X) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

// 5 30 / 10 20 30 40 50	2
// 5 10 / 10 20 30 40 50	0
// 5 50 / 10 20 30 40 50	4
// 5 99 / 10 20 30 40 50	-1
// 5 2 / 1 2 2 3 4	1