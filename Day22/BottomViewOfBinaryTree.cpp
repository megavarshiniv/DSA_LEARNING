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
  public:
    vector<int> bottomView(Node *root) {
        vector<int> finalOutput;
        if(root == nullptr) return finalOutput;
        
        queue<pair<Node*,int>> pendingNodes;
        pendingNodes.push({root,0});
        
        map<int,int> myMap;
        while(!pendingNodes.empty()){
            pair<Node*,int> front=pendingNodes.front();
            pendingNodes.pop();
            
            Node* node=front.first;
            int hd=front.second;
            
            myMap[hd]=node->data;
            
            if(node->left!=nullptr){
                pendingNodes.push({node->left,hd-1});
            }
            if(node->right!=nullptr){
                pendingNodes.push({node->right,hd+1});
            }
        }
        for(auto it:myMap){
            finalOutput.push_back(it.second);
        }
    }
};