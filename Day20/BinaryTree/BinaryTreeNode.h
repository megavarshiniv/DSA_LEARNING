class BinaryTreeNode{ 
    public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};