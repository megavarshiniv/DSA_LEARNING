//top-down approach

class Solution {
    int solve(vector<int>& val,vector<int>& wt,int N,int W,vector<vector<int>>& dp){
        if(N==0||W==0) return 0;
        if(dp[N][W]!=-1) return dp[N][W];
        if(wt[N-1]<=W){
            int include = val[N-1]+solve(val,wt,N-1,W-wt[N-1],dp);
            int exclude = solve(val,wt,N-1,W,dp);
            dp[N][W]= max(include,exclude);
        }
        else{
            dp[N][W]=solve(val,wt,N-1,W,dp);
        }
        return dp[N][W];
    }
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int N=val.size();
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        int ans= solve(val,wt,N,W,dp);
        return ans;
    }
};

//bottom-up approach
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>> dp(n+1,vector<int> (W+1));
        
        for(int j=0;j<W+1;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){
                if(wt[i-1]<=j){
                    int include=val[i-1]+dp[i-1][j-wt[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=max(include,exclude);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
};