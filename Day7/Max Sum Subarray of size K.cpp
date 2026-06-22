class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int i=0,j=0;  
        int sum=0,max_sum=INT_MIN;
        
        while(j<n){
            sum+=arr[j];
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
                max_sum=max(max_sum,sum);
                sum-=arr[i];
                i++;
                j++;
            }
            
        }
        return max_sum;
    }
};