class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int max_count=INT_MIN;
        int i=0,j=0;
        int count=0;
        while(j<n){
            
            if(isVowel(s[j])){
                count++;
            }
            if((j-i+1)<k){
                j++;
            }
            else if(j-i+1==k){
                max_count=max(max_count,count);
                if(isVowel(s[i])){
                    count--;
                }
                i++;
                j++;
            }
        }
        return max_count;
    }
};