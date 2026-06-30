class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n=arr.size();
        stack<int> st;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                ans.push_back(-1);
            }
            int elem=arr[i];
            if(st.size()>0 && st.top()<elem){
                ans.push_back(st.top());
            }
            else if(st.size()>0 && st.top()>=elem){
                while(st.size()>0 && st.top()>=elem){
                    st.pop();
                }
                if(st.size()==0){
                    ans.push_back(-1);
                }else{
                    ans.push_back(st.top());
                }
            }
            st.push(elem);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};