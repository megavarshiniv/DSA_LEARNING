#include<bits/stdc++.h>
using namespace std;
int orderAgnosticSearch(vector<int>&arr,int target){
    int n=arr.size();
    bool isAsc=arr[0]<arr[n-1];
    
    
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target) return mid;
        
        if(isAsc){
            if(target<arr[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }else{
            if(target<arr[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr={5,4,3,2,1};
    cout<<orderAgnosticSearch(arr,2)<<endl;
}