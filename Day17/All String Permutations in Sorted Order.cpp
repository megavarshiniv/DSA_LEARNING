class Solution {
    void getPermutations(string input,string output,vector<string>& ans){
        if(input.length()==0){
            ans.push_back(output);
            return;
        }
        
        
        for(int i=0;i<input.length();i++){
            char c=input[i];
            string newInput=input.substr(0,i)+input.substr(i+1);
            string newOutput=output+c;
            getPermutations(newInput,newOutput,ans);
        }
        
    
    }
  public:
    vector<string> permutation(string s) {
        string output="";
        vector<string> ans;
        getPermutations(s,output,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};