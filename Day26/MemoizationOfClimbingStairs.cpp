class Solution {
    int solve(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
public:
    int climbStairs(int n) {
        //recursion 
        /*if(n<=2) return n;
        return climbStairs(n-1)+climbStairs(n-2);*/
        //top-down approach
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};
//bottom-up approach
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        if(n<=2) return n;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};