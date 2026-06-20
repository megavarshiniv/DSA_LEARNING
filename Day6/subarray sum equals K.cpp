class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int prefix=0;
      int n=nums.size();
      unordered_map<int,int> myMap;
      myMap[0]=1;
      int count=0;
      for(int i=0;i<n;i++){
        prefix+=nums[i];
        if(myMap.find(prefix-k)!=myMap.end()){
            count+=myMap[prefix-k];
        }
        myMap[prefix]++;
      }
      return count;
    }
};
\\Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2