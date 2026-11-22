#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a;
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;
        cout << largestOfThree(a, b, c) << endl;
    }

    // cout << largestOfThree(12, 45, 30);    //	45
    // cout << endl;
    // cout << largestOfThree(5, 5, 2);       //	5
    // cout << endl;
    // cout << largestOfThree(-10, -5, -20);  //	-5
    // cout << endl;
    // cout << largestOfThree(8, 8, 8);       //	8
    // cout << endl;
    
    return 0;
}