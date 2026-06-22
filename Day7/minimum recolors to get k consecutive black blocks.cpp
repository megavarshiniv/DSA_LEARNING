class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int i=0,j=0;
        int min_count=INT_MAX;
        int count=0;
        while(j<n){
            if(blocks[j]=='W'){
                count++;
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                min_count=min(min_count,count);
                  
                if(blocks[i]=='W'){
                    count--;
                }

                i++;
                j++;
            }
        }
        return min_count;
    }
};