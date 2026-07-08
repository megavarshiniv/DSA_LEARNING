/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    void solve(Node* root,vector<int>& output){
        if(root == nullptr) return;
        solve(root->left,output);
        solve(root->right,output);
        output.push_back(root->data);
    }
  public:
    vector<int> postOrder(Node* root) {
        vector<int> output;
        solve(root,output);
        return output;
    }
};