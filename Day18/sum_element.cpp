
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(vector<int>& nums, int idx, int n) {
        if (idx == n) return 0;
        return nums[idx] + sum(nums, idx + 1, n);
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();
    int result = sol.sum(nums, 0, n);
    cout << "Sum of elements: " << result << endl;
    return 0;
}