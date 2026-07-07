#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void print(int n) {
        if (n == 0) return;
        print(n - 1);
        cout << n << " ";
    }
};
int main() {
    int n;
    Solution sol;
    cout << "Enter a number: "; 
    cin >> n;
    sol.print(n); 
}