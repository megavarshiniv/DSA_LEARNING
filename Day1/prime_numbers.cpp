class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int cnt=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
        }
        cnt=cnt+1;
        if(cnt==2)
            return true;
        else
            return false;
        
    }
};

