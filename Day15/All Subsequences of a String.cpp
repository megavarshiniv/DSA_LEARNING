class Solution {
    void allSubsequences(string &s,int idx,string output,vector<string> &finalOutput){
        if(idx==s.length()){
            finalOutput.push_back(output);
            return;
        }
        
        //not include
        allSubsequences(s,idx+1,output,finalOutput);
        //include
        allSubsequences(s,idx+1,output+s[idx],finalOutput);
    }
  public:
    vector<string> powerSet(string &s) {
        int n=s.length();
        vector<string> finalOutput;
        string output="";
        
        allSubsequences(s,0,output,finalOutput);
        sort(finalOutput.begin(),finalOutput.end());
        return finalOutput;
    }
};