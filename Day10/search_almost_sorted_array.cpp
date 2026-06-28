class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int s=0,e=n-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target) return mid;
            else if(mid-1>=s && arr[mid-1]==target){ 
                return mid-1;
            }
            else if(mid+1 <= e && arr[mid+1]==target){ 
                return mid+1;
            }
            else if(target<arr[mid]){ 
                 e=mid-2;
                
            }
            else{ 
                s=mid+2;
            }
        }
        return -1;
        
    }
};
// time complexity is O(log n)
// space complexity is O(1)