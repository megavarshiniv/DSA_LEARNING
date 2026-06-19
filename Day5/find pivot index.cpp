class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int tot=0;
        for(int i=0;i<n;i++){
            tot+=nums[i];
        }
        int left_sum=0;
        int right_sum=0;
        for(int i=0;i<n;i++){
            right_sum=tot-left_sum-nums[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum+=nums[i];
        }
        return -1;
    }
};