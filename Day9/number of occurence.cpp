class Solution {
  public:
    int firstOccurence(vector<int>& arr,int k)
    {
        int n=arr.size();
        int ans=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                ans=mid;
                e=mid-1;
            }else if(k<arr[mid]){
                e=mid-1;
            }else{
               s=mid+1;
            }
        }
        return ans;
    }
    
    int lastOccurence(vector<int> arr,int k)
    {
        int n=arr.size();
        int ans=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                ans=mid;
                s=mid+1;
            }else if(k<arr[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    
    int countFreq(vector<int>& arr, int target) {
        int n=arr.size();
        int first=firstOccurence(arr,target);
        if(first==-1) return 0;
        int last=lastOccurence(arr,target);
        int ans=last-first+1;
        
    }
};
