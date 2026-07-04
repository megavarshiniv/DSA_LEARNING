class Solution {
    void getAllSubsets(vector<int>& nums,int idx,vector<int> output,vector<vector<int>>& finalOutput){
        //base case
        if(idx==nums.size()){
            finalOutput.push_back(output);
            return;
        }
        output.push_back(nums[idx]);
        getAllSubsets(nums,idx+1,output,finalOutput);
        output.pop_back();
        int nextIdx=idx+1;
        while(nextIdx<nums.size()&&nums[nextIdx]==nums[idx]){
            nextIdx++;
        }

        getAllSubsets(nums,nextIdx,output,finalOutput);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> finalOutput;
        vector<int> output;
        getAllSubsets(nums,0,output,finalOutput);
        return finalOutput; 
    }
};