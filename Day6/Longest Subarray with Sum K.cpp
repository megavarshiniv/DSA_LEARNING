class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int> myMap;
        myMap[0]=-1;
        int prefix=0,max_len=0;
        
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            
            if(myMap.find(prefix-k)!=myMap.end()){
                max_len=max(max_len,i-myMap[prefix-k]);
            }
            if(myMap.find(prefix)==myMap.end()){
                myMap[prefix]=i;
            }
        }
        return max_len;
    }
};

\\Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.