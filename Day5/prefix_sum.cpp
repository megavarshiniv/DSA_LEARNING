class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int n=arr.size();
        vector<int> pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        vector<int> sol;
        for(int i=0;i<queries.size();i++){
            
            int x=queries[i][0];
            int y=queries[i][1];
            
            long long sum;
            if (x == 0) {
                sum = pre[y]; 
            } else {
                sum = pre[y] - pre[x-1];
            }
            sol.push_back((int)sum);
        }
        return sol;
    }
};