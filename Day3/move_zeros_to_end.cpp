class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0,j=0;
        while(j<n){
            if(arr[j]==0){
                j++;
            }
            else{
                arr[i++]=arr[j++];
            }
        }
        for(int k=i;k<n;k++){
            arr[k]=0;
        }
    }
};