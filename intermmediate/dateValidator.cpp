#include <iostream>
using namespace std;

// divisible by 4 and not end of century OR divisible by 400
bool isLeapYear(int year) { 
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int date;
    int month;
    int year;
    cin >> date;
    cin >> month;
    cin >> year;

    if (!(year >= 0 && year <=9999 )) {
        cout << "INVALID";
        return 0;
    }
    
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (date >= 1 && date <= 31) cout << "VALID";
        else cout << "INVALID";        
        break;
    case 2:
        if (isLeapYear(year) && (date >= 1 && date <= 29) || 
            !isLeapYear(year) && (date >= 1 && date <= 28)) {
            cout << "VALID";
        } 
        else cout << "INVALID";
        break;   
    case 4:
    case 6:
    case 9:
    case 11:
        if (date >= 1 && date <= 30) cout << "VALID";
        else cout << "INVALID";
        break;
    default:
        cout << "INVALID";
        break;
    }




    return 0;
}

// 29 2 2024	VALID
// 29 2 2023	INVALID
// 31 4 2025	INVALID
// 28 2 1900	VALID
// 29 2 2000	VALID