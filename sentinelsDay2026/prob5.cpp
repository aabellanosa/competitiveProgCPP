#include <iostream>
using namespace std;

/*
Problem 5: Border and Core
Easy 10 points
Description
A grid has R rows and C columns of integers. A cell is a border cell if it is in the first row, last row, first column or last column. All other cells are interior cells.
Print the sum of the border cells and the sum of the interior cells. If there are no interior cells, the interior sum is 0.

Input
The first line contains R and C.
Each of the next R lines contains C integers: one row of the grid.

Output
Two integers separated by a space: the border sum, then the interior sum.
Constraints

1 <= R, C <= 50

-100 <= each grid value <= 100

Sample 1

Input
3 4
1 2 3 4
5 6 7 8
9 10 11 12

Output
65 13

Explanation: Interior cells are 6 and 7, so the interior sum is 13. The total of all cells is 78, so the border sum is 78-13 = 65.

Sample 2
Input
2 3
1 -2 3
4 5 -6

Output
5 0

Explanation: With only 2 rows, every cell is on the border: 1-2+3+4+5-6=5. The interior is empty, so its sum is 0.

*/

int main() {
    int R, C;
    cin >> R; 
    cin >> C;
    
    int border = 0;
    int core = 0;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            int elem;
            cin >> elem;
            if (i == 1 || i == R || j == 1 || j == C) {
                border += elem;
            } else {
                core += elem;
            }
            
        }
    }
    cout << border << " " << core << endl;


    return 0;
}