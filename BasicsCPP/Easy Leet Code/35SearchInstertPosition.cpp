#include <iostream>
#include <vector>
using namespace std;

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
