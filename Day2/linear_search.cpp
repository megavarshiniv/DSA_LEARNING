#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int i;
        for( i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                return i;
                
            }
        }
        return -1;
        
    }
};