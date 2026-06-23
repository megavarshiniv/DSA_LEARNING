class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int zeros=0,max_len=INT_MIN;
        while(j<n){
            if(nums[j],,==0){
                zeros++;
            }
            if(zeros<=k){
                max_len=max(max_len,j-i+1);
                j++;
            }else if(zeros>k){
                while(zeros>k){
                    if(nums[i]==0){
                        zeros--;
                    }
                    i++;
                }
                max_len=max(max_len,j-i+1);
                j++;
            }
        }
        return max_len;
    }
};