#include <iostream>
#include <string>
#include <map>
using namespace std;

/*
Problem 4: Favorite Letter
Easy 10 points
Description
Given a string, find the letter that appears most often. If several letters share the highest count, choose the one that comes first in the alphabet.
Input
One line containing the string s.
Output
The chosen letter, a space, and the number of times it appears.
Constraints
1 <= |s| <= 200
s contains only lowercase letters a-z.

Sample 1

Input
banana

Output
a 3


Explanation: a appears 3 times, n appears 2 times, b appears I time. The most frequent letter is a.

Sample 2

Input
abcabc

Output
a 2
Explanation: a, b and c each appear 2 times. Ties go to the alphabetically smallest letter, a.

*/

int main() {
    string s;
    cin >> s; 


    //create map as frequency counter
    map <char, int> lowerMap;
    for (char c = 'a'; c <= 'z'; c++) {
        lowerMap[c] = 0;
    }

    for (char c : s) {  //count each letter in string s to its map
        lowerMap[c]++;
    }

    int highestCount = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        if (lowerMap[c] > highestCount) {
            highestCount = lowerMap[c];
        }
    }

    for (char c = 'a'; c <= 'z'; c++) { //loop again to get first highest count
        if (lowerMap[c]  == highestCount) {
            cout << c << " " << highestCount << endl;
            return 0;
        }
    }

    return 0;




}