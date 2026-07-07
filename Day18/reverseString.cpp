class Solution {
    void helper(string& s,int start,int end){
        if(start>=end){
            return;
        }
        //string ans="";
        swap(s[start],s[end]);
        helper(s,start+1,end-1);
    }
  public:
    string reverseString(string& s) {
        int n=s.length();
        helper(s,0,n-1);
        return s;
    }
};
