#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

/*
Problem 6: Painted Fence
Moderate 20 points
Description
A fence is a number line. Painter i paints the segment from position a_i to position b_i, covering a length of b_i-a_i. Segments may overlap, and a part painted several times is counted once. Print the total length of the fence that is painted.

Input
The first line contains n, the number of painters.
Each of the next n lines contains two integers a and b.

Output
One integer: the total painted length.

Constraints
1 <= n <= 100

0<a<b<1000000000

Sample 1
Input
3
1 5
3 8
10 12

Output
9

Explanation: Segments [1,5] and [3,8] merge into [1,8], which has length 7. Segment [10,12] adds 2.
Total 9.

Sample 2

Input
3
0 4
20 21
4 6

Output
7

Explanation: [0,4] and [4,6] only touch at one point; together they cover 4 +2=6. Segment (20,21] adds 1. Total 7.


*/

int main() {
    int n;
    cin >> n; 
    vector <pair<int, int>> intervals; //creating pair objects from <utilityy> header as sulod sa intervals;


    while (n--) {
        int a, b;
        cin >> a;
        cin >> b;

        intervals.push_back({a, b});  //pag sulod sa pairs sa expandable na intervals <vector>
    }
    
    sort(intervals.begin(), intervals.end()); //sorting the intervals first number first using the <utility> header

    vector <std::pair<int, int>> merged;  //creating a new vector
    merged.push_back(intervals[0]); //sulod ang first pair sa merged

    for (size_t i = 1; i < intervals.size(); ++i) {  //size_t unsigned integer for safety
        auto& last = merged.back(); //auto for automatic datatype deduction & is reference so actual object is edited not its copy
        const auto& current = intervals[i];  //const para read lang ning ikaduha

        if (current.first <= last.second) {
            last.second = max(last.second, current.second);
        } else {
            merged.push_back(current);
        }
    }


    // for (const auto& [start, end] : intervals) { //pang checking via loop
    //     cout << "[" << start << ", " << end << "] ";
    // }

    // cout << endl;
    
    // for (const auto& [start, end] : merged) { //pang checking via loop
    //     cout << "[" << start << ", " << end << "] ";
    // }
    
    // cout << endl;

    int totalPaints = 0;
    
    for (const auto& [start, end] : merged) {
        totalPaints += end - start;
    }

    cout << totalPaints << endl;

    return 0;
}