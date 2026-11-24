#include <iostream>
#include <vector>
using namespace std;

/*
Problem 2: Calm Streak
Easy 10 points
Description
A weather station recorded the temperature on each of n days. A group of consecutive days is calm if, for every pair of neighboring days in the group, the temperatures differ by at most K A single day is always calm. Find the length of the longest calm group of consecutive days.
Input
The first line contains two integers n and K.
The second line contains n integers t1, t2,..., tn: the temperatures:
Output
One integer: the length of the longest calm group.
Constraints
1 <= n <= 200
0K < 100
-50 <= ti <= 50

Sample 1
Input
8 3
20 22 21 28 29 30 25 26

Output
3

Explanation: Differences are 2, 1, 7, 1, 1, 5, 1. With K = 3, the jumps of 7 and 5 break the streak. Streaks: 3, 3, 2. The longest is 3.
 
Sample 2
Input
5 2
1 2 3 4 5
Output
5

Explanation: Every difference is 1, which is at most 2, so all 5 days form one streak.

*/


int main() {
    int n, K;
    cin >> n;
    cin >> K;
    vector <int> temps(n);
    int streakCount = 1;
    int maxStreak = 1;

    for (int i = 0; i < n; i++) { //ibutang sa og vector (array na expandable)
        int temp;
        cin >> temp;
        temps[i] = temp;
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(temps[i] - temps[i + 1]) <= K) {
            streakCount++;
            if (streakCount > maxStreak) {
                maxStreak = streakCount;
            }
        } else {
            streakCount = 1;
        }
    } 

    cout << maxStreak;


    return 0;
}