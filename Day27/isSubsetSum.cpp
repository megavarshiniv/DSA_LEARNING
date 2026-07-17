
//top-down approach

class Solution {
    bool checkSubsetSum(vector<int>& arr,int target,int n,vector<vector<int>>& dp){
        if(target==0) return true;
        if(n==0) return false;
        if(dp[n][target]!=-1) return dp[n][target];
        if(arr[n-1]<=target){
            bool include=checkSubsetSum(arr,target-arr[n-1],n-1,dp);
            bool exclude=checkSubsetSum(arr,target,n-1,dp);
            return dp[n][target]=include||exclude;
        }else{
            return dp[n][target]=checkSubsetSum(arr,target,n-1,dp);
        }
    }
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return checkSubsetSum(arr,sum,n,dp);
    }
};

//bottom-up approach

class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i<n+1;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    int include=dp[i-1][j-arr[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=include||exclude;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};