//top-down approach
class Solution {
    int countWays(vector<int>& coins,int sum,int n,vector<vector<int>>& dp){
        if(n==0) return 0;
        if(sum==0) return 1;
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(coins[n-1]<=sum){
            int include=countWays(coins,sum-coins[n-1],n,dp);
            int exclude=countWays(coins,sum,n-1,dp);
            dp[n][sum]=include+exclude;
        }else{
            dp[n][sum]=countWays(coins,sum,n-1,dp);
        }
        return dp[n][sum];
    }
  public:
    int count(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return countWays(coins,sum,n,dp);
    }
};

//bottom-up approach 

class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1));
        dp[0][0]=1;
        for(int j=1;j<sum+1;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(coins[i-1]<=j){
                    int include=dp[i][j-coins[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=include+exclude;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};