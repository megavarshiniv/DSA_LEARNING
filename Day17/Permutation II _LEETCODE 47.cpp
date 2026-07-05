class Solution {
    void getAllPermutations(vector<int> nums,vector<int> output,vector<vector<int>>& finalOutput){
        if(nums.size()==0){
            finalOutput.push_back(output);
            return;
        }
        unordered_set<int> mySet;
        for(int i=0;i<nums.size();i++){
            int curr_elem=nums[i];
            if(mySet.find(curr_elem)==mySet.end()){
                 mySet.insert(curr_elem);
            vector<int> newInput=nums;
            newInput.erase(newInput.begin()+i);

            vector<int> newOutput=output;
            newOutput.push_back(curr_elem);

            getAllPermutations(newInput,newOutput,finalOutput);
            }   
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> finalOutput;
        getAllPermutations(nums,output,finalOutput);
        return finalOutput;
    }
};