#include <iostream>
using namespace std;

int main() {
    int opernd1;
    int opernd2;
    char opertor;

    cin >> opernd1;
    cin >> opernd2;
    cin >> opertor;

    if (opertor == '+') cout << opernd1 + opernd2;
    if (opertor == '-') cout << opernd1 - opernd2;
    if (opertor == '*') cout << opernd1 * opernd2;
    if (opertor == '/') cout << opernd1 / opernd2;


    return 0;
}

// 10 5 +	15
// 10 5 -	5
// 10 5 *	50
// 20 4 /	5
// 7 2 /	3