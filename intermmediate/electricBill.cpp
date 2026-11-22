#include <iostream>
using namespace std;

int main() {
    int reading;
    cin >> reading; 

    if (reading <= 100) {
        cout << reading * 5;
    } else if (reading <= 200) {
        cout << 100 * 5 + (reading - 100) * 7;
    } else {
        cout << 100 * 5 + 100 * 7 + (reading - 200) * 10;        
    }

    return 0;
}


// 50	250
// 100	500
// 150	850
// 200	1200
// 300	2200