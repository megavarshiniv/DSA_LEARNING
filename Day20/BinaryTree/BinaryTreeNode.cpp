class BinarySearchTree {
    public:
    int data;
    BinarySearchTree* left;
    BinarySearchTree* right;

    BinarySearchTree(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void print(BinarySearchTree* root){
    if(root == nullptr) return;

    // print root's data
    cout << "root's -> data: " << root -> data << endl;

    if(root -> left){
        cout << "root's left: " <<  root -> left -> data << endl;
    }

    if(root -> right){
        cout << "root's right: " << root -> right -> data << endl;
    }
}

int main(){
    // create the root node
    BinarySearchTree* root = new BinarySearchTree(10);

    BinarySearchTree* leftChild = new BinarySearchTree(20);
    BinarySearchTree* rightChild = new BinarySearchTree(30);

    root -> left = leftChild;
    root -> right = rightChild;

    // print root, left and right
    print(root);
}