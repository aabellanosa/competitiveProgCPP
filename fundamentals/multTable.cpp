#include <iostream>
#include <string>
using namespace std;

string multTable(int N) {
    string table = "";
    for (int i = 1; i <= 10; i++) {
        table += to_string(N) + " x " + to_string(i) + " = " + to_string(i * N);
        if (i != 10) table += "\n";
    }
    return table;
}

int main() {
    int T;
    cin >> T;

    while  (T--) {
        int N;
        cin >> N;
        cout << multTable(N) << endl;
    }


    /*
        // cout << multTable(2);   2 x 1 = 2 / 2 x 10 = 20
        // cout << endl;
        // cout << multTable(5);   5 x 1 = 5 / 5 x 10 = 50
        // cout << endl;
        // cout << multTable(10);  10 x 1 = 10 / 10 x 10 = 100
        // cout << endl;
    */

    
    
    return 0;
}