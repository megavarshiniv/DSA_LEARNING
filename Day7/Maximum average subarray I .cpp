class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int max_sum=INT_MIN;
       
        int sum=0;
        while(j<n){
            sum+=nums[j];
            
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                max_sum=max(sum,max_sum);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return (double)max_sum/k;
    }
};