class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(st.size()==0){
                ans.push_back(i+1);
            }
            int elem=arr[i];
            if(st.size()>0 && st.top().first>elem){
                ans.push_back(i-st.top().second);
            }
            if(st.size()>0 && st.top().first<=elem){
                while(st.size()>0 && st.top().first<=elem){
                    st.pop();
                }
                if(st.size()==0){
                    ans.push_back(i+1);
                }else{
                    ans.push_back(i-st.top().second);
                }
            }
            st.push({elem,i});
        }
        return ans;
    }
};