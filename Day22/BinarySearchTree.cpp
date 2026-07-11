#include<bits\stdc++.h>
using namespace std;
class BinarySearchTree{
    public:
    int data;
    BinarySearchTree* left;
    BinarySearchTree* right;
    BinarySearchTree(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
BinarySearchTree* insert(BinarySearchTree* root,int val){
    if(root==NULL){
        return new BinarySearchTree(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
void printInorder(BinarySearchTree* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    BinarySearchTree* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);
    return 0;
}