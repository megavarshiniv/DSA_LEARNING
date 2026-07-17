//top-down approach

class Solution {
    int maxProfit(vector<int>& price,int n,vector<int>& length,int l,vector<vector<int>>& dp){
        if(n==0||l==0) return 0;
        if(dp[n][l]!=-1) return dp[n][l];
        if(length[n-1]<=l){
            int include=price[n-1]+maxProfit(price,n,length,l-length[n-1],dp);
            int exclude=maxProfit(price,n-1,length,l,dp);
            dp[n][l]= max(include,exclude);
        }else{
            dp[n][l]= maxProfit(price,n-1,length,l,dp);
        }
        return dp[n][l];
    }
  public:
    int cutRod(vector<int> &price) {
        int n=price.size();
        vector<int> length(n);
        for(int i=0;i<n;i++){
            length[i]=i+1;
        }
        int l=n;
        vector<vector<int>> dp(n+1,vector<int>(l+1,-1));
        return maxProfit(price,n,length,n,dp);
    }
};