#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector <int> nums(T);

    for (int i = 0; i < T; i++) {
        int num;
        cin >> num;
        nums[i] = num;
    }


    sort(nums.begin(), nums.end()); //sort vector ascending
    int maxNum = nums[T - 1];

    for (int i = T - 2; i >= 0; i--) {
        if (nums[i] < maxNum) {
            cout << nums[i];
            return 0;
        }
    }

    cout << "NONE";

    return 0;

}   

// 8
// 10 30 20 40 40 15 30 50