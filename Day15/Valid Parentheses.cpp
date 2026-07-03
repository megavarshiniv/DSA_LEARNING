class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()) return false;
            bool case1 = s[i]==')' && st.top()=='(';
            bool case2 = s[i]=='}' && st.top()=='{';
            bool case3 = s[i]==']' && st.top()=='[';
            if(case1||case2||case3) st.pop();
            else return false;
        }
      }
      if(st.empty()) return true;
      else return false;
    }
};