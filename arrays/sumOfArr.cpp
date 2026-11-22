#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;     //pila kabuok 

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        sum += elem;
    }

    cout << sum;


    return 0;
}

// 5 / 1 2 3 4 5	15
// 4 / 10 10 10 10	40
// 3 / -5 5 10	10
// 1 / 100	100