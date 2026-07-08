/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
    void solve(Node* root,vector<int>& output){
        if(root == nullptr) return;
        output.push_back(root->data);
        solve(root->left,output);
        solve(root->right,output);
    }
  public:
    vector<int> preOrder(Node* root) {
        vector<int> output;
        solve(root,output);
        return output;
    }
};