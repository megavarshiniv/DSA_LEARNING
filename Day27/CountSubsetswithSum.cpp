class Solution {
    int countSubsets(vector<int>& arr,int target,int n,vector<vector<int>>& dp){
        if(n==0){
            if(target==0){
                return 1;
            }
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        if(arr[n-1]<=target){
            int include=countSubsets(arr,target-arr[n-1],n-1,dp);
            int exclude=countSubsets(arr,target,n-1,dp);
            dp[n][target]=include+exclude;
        }else{
            dp[n][target]=countSubsets(arr,target,n-1,dp);
        }
        return dp[n][target];
    }
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return countSubsets(arr,target,n,dp);
    }
};
//bottom-up approach
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=0;j<target+1;j++){
                if(arr[i-1]<=j){
                    int include=dp[i-1][j-arr[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=include+exclude;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][target];
    }
};