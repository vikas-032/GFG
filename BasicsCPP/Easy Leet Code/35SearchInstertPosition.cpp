#include <iostream>
#include <vector>
using namespace std;
// [1, 6, 8, 10 , 12, 15] index=0
// size of array = 0=1 , 1=6 , 2=8, 3=10, 4= 12 , 5=15
//target =6;
//7 print then serch instert operation 8 solution 8
// binary serch = fast algoritham it is used to find a element in a sorted array 

class Solution {  
public:
    int searchInsert(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        int ans = arr.size(); // default position if not found

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                return mid; // found exact match
            }
            else if (arr[mid] < target) {
                start = mid + 1; 
            }
            else {
                ans = mid; // possible insert position
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 5;
    Solution sol;
    cout << sol.searchInsert(arr, target) << endl; // Output: 2
    return 0;
}

// n+n(2n)
//o(n)