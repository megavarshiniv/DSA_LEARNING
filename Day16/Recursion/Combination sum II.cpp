//leetcode-40

class Solution {
    void getCombinations(vector<int>& candidates,int idx,int target,vector<int>& output,vector<vector<int>>& finalOutput){
        if(idx==candidates.size()){
           if(target==0){
            finalOutput.push_back(output);
           }
            return;
        }
        
        if(candidates[idx]<=target){
            output.push_back(candidates[idx]);
            getCombinations(candidates,idx+1,target-candidates[idx],output,finalOutput);
            output.pop_back();
        }
        int nextIdx=idx+1;
        while(nextIdx<candidates.size()&&candidates[idx]==candidates[nextIdx]){
            nextIdx++;
        }
        getCombinations(candidates,nextIdx,target,output,finalOutput);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> finalOutput;
        vector<int> output;
        getCombinations(candidates,0,target,output,finalOutput);
        return finalOutput;
    }
};