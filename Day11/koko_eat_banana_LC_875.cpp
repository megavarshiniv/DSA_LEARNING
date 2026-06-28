class Solution {
   long  calculateHours(vector<int>& piles,int k){
        long total_hours=0;
        for(int i=0;i<piles.size();i++){
            int bananas=piles[i];
            long hr=ceil((double)bananas/(double)k);
             total_hours+=hr;
        }
        return total_hours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            //calculate total hr 
            long total_hr=calculateHours(piles,mid);
            if(total_hr<=h){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};