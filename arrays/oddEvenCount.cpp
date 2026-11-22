#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;     //pila kabuok 
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        if (elem % 2 == 0) evenCount++;
        else oddCount++;
    }

    cout << evenCount << " " << oddCount;


    return 0;
}

// 6 / 1 2 3 4 5 6	3 3
// 4 / 2 4 6 8	4 0
// 3 / 1 3 5	0 3
// 5 / 0 1 2 3 4	3 2