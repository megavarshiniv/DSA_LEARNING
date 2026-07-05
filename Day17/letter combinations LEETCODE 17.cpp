class Solution {
    void getAllCombinations(string digits,int idx,string output,vector<string>& finalOutput){
        vector<string> mappings={"","","abc","def","ghi","jkl","mno",
        "pqrs","tuv","wxyz"
        };
        if(digits.length()==idx){
            finalOutput.push_back(output);
            return;
        }
        string letters=mappings[digits[idx]-'0'];
        for(int i=0;i<letters.length();i++){
            char curr=letters[i];
            getAllCombinations(digits,idx+1,output+curr,finalOutput);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> finalOutput;
        string output="";
        getAllCombinations(digits,0,output,finalOutput);
        return finalOutput;
    }
};