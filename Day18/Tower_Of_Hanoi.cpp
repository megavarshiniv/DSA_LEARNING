class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
       
       if(n==0){
           return 0;
       }
       int steps=towerOfHanoi(n - 1, from, aux, to);
       steps++;
       steps+=towerOfHanoi(n - 1, aux, to, from);
       return steps;
    }
};