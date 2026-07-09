#include<bits\stdc++.h>
using namespace std;
class BinaryTreeNode{
    public:
        int data;
        BinaryTreeNode* left;
        BinaryTreeNode* right;

        BinaryTreeNode(int data){
            this -> data = data;
            left = nullptr;
            right = nullptr;
        }
};
BinaryTreeNode* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    if(rootData == -1){
        return nullptr;
    }
    BinaryTreeNode* root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode* front = pendingNodes.front();
        pendingNodes.pop();
        int leftChildData;
        cout << "Enter left child of " << front -> data << ": ";
        cin >> leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode* child = new BinaryTreeNode(leftChildData);
            front -> left = child;
            pendingNodes.push(child);
        }
        int rightChildData;
        cout << "Enter right child of " << front -> data << ": ";
        cin >> rightChildData;
        if(rightChildData != -1){
            BinaryTreeNode* child = new BinaryTreeNode(rightChildData);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTreeLevelWise(BinaryTreeNode* root){
    if(root == nullptr){
        return;
    }
    queue<BinaryTreeNode*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front -> data << ":";
        if(front -> left != nullptr){
            pendingNodes.push(front -> left);
        }
        if(front -> right != nullptr){
            pendingNodes.push(front -> right);
        }
    }
}
int main(){
    BinaryTreeNode* root = takeInputLevelWise();
    printTreeLevelWise(root);
}