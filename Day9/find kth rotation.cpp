class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int s=0,e=n-1;
        while(s<=e){
            if(arr[s]<=arr[e]){
                return s;
            }
            int mid=s+(e-s)/2;
            int pre=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(arr[mid]<=arr[pre]&&arr[mid]<=arr[next]){
                return mid;
            }else if(arr[s]<=arr[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return -1;
    }
};
