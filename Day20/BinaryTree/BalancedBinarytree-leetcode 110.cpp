/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int checkHeight(TreeNode* root){
        if(root == nullptr) return 0;

        int max1=0,max2=0;
        int maxL=checkHeight(root->left);
        if(maxL==-1) return -1;
        max1=max(max1,maxL);
        
        int maxR=checkHeight(root->right);
        if(maxR==-1) return -1;
        max2=max(maxR,max2);

        int ans=abs(max1-max2);

        if(ans<=1) return max(max1,max2)+1;
        else return -1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root)!=-1;
    }
};