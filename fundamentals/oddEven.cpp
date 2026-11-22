#include <iostream>
using namespace std;

// string oddEven(int a) {
//     return (a % 2 == 0) ? "EVEN" : "ODD";
// }

int main() {
    int num;
    cin >> num;
    // cout << oddEven(num) << endl;
    (num % 2 == 0) ? cout << "EVEN" : cout << "ODD" << endl;

    // cout << oddEven(4);   //EVEN
    // cout << endl;
    // cout << oddEven(7);	  //ODD
    // cout << endl;
    // cout << oddEven(0);	   //EVEN
    // cout << endl;
    // cout << oddEven(-3);    //	ODD
    // cout << endl;
    // cout << oddEven(100);	//EVEN

    return 0;
}