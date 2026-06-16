#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int k=arr[n-1];
        int max=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=k && arr[i]>max)
            {
                max=arr[i];
            }
        }
        return max;
    }
};