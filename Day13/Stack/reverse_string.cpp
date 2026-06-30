//gfg

class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char c=s[i];
            st.push(c);
        }
        string ans=" ";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
