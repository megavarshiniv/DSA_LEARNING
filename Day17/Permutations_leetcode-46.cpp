class Solution {
    void getAllPermutation(vector<int>& nums,vector<int>& output,vector<vector<int>>& finalOutput){
        if(nums.size()==0){
            finalOutput.push_back(output);
            return;
        }
        for(int i=0;i<nums.size();i++){
            int curr_elem=nums[i];
            vector<int> newInput=nums;
            newInput.erase(newInput.begin()+i);
       
            vector<int> newOutput=output;
            newOutput.push_back(curr_elem);
            getAllPermutation(newInput,newOutput,finalOutput);
           
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>>finalOutput;
        getAllPermutation(nums,output,finalOutput);
        return finalOutput;
    }
};