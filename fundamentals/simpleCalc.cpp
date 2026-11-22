#include <iostream>
using namespace std;

int simpleCalc(int opnd1, int opnd2, char oprt) {
    if (oprt == '+') return opnd1 + opnd2;
    if (oprt == '-') return opnd1 - opnd2;
    if (oprt == '*') return opnd1 * opnd2;
    return opnd1 / opnd2;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int operand1;
        int operand2;
        char oprtr;
        cin >> operand1;
        cin >> operand2;
        cin >> oprtr;

        cout << simpleCalc(operand1, operand2, oprtr) << endl;

    }

    // cout << simpleCalc(10, 5, '+');  //	15
    // cout << endl;
    // cout << simpleCalc(10, 5, '-');  //	5
    // cout << endl;
    // cout << simpleCalc(10, 5, '*');  //	50
    // cout << endl;
    // cout << simpleCalc(20, 4, '/');  //	5
    // cout << endl;
    // cout << simpleCalc(7, 2, '/');  //	3
    // cout << endl;

    return 0;
}