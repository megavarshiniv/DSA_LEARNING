//top-down approach(memoization)
class Solution {
    int solve(vector<int>&val,vector<int>& wt,int n,int capacity,vector<vector<int>>& dp){
        if(n==0||capacity==0){
            return 0;
        }
        if(dp[n][capacity]!=-1){
            return dp[n][capacity];
        }
        if(wt[n-1]<=capacity){
            int include=val[n-1]+solve(val,wt,n,capacity-wt[n-1],dp);
            int exclude=solve(val,wt,n-1,capacity,dp);
            dp[n][capacity]=max(include,exclude);
        }else{
            dp[n][capacity]= solve(val,wt,n-1,capacity,dp);
        }
        return dp[n][capacity];
    }
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(capacity+1,-1));
        return solve(val,wt,n,capacity,dp);
    }
};

//Bottom-up approach(tabulation)
class Solution {
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        vector<vector<int>> dp(n+1,vector<int> (capacity+1));
        
        for(int j=0;j<capacity+1;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<capacity+1;j++){
                if(wt[i-1]<=j){
                    int include=val[i-1]+dp[i][j-wt[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=max(include,exclude);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][capacity];
    }
};