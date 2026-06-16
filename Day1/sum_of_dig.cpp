class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum=0;
        while(n>0)
        {
            int d=n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }
};
