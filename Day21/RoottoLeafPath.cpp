/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    void findPath(Node* root,vector<int> path,vector<vector<int>>& output){
        if(root == nullptr) return;
        path.push_back(root->data);
        if(root->left==nullptr && root->right==nullptr){
            output.push_back(path);
            return;
        }
        findPath(root->left,path,output);
        findPath(root->right,path,output);
        path.pop_back();
    }
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> output;
        vector<int>path;
        findPath(root,path,output);
        return output;
    }
};