class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int min_len=INT_MAX,sum=0;
        while(j<n){
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            if(sum>=target){
                    
                while(sum>=target){
                   min_len=min(min_len,j-i+1);
                   sum-=nums[i];
                   i++;
                } 
                j++;  
            }
           
        }
        if(min_len==INT_MAX) return 0;
        else return min_len;
    }
};
