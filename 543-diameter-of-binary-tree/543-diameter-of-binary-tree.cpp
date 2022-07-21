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
    // int res=0;
public:
    
    // int diameterOfBinaryTree(TreeNode* root) {
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int lh = diameterOfBinaryTree(root->left);
    //     int rh = diameterOfBinaryTree(root->right);
    //     res = max(res,lh+rh);
    //     return max(lh,rh)+1;
    // }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        rec(root, d);
        return d;
    }
    
    int rec(TreeNode* root, int &d) {
        if(root == NULL) return 0;
        int ld = rec(root->left, d);
        int rd = rec(root->right, d);
        d=max(d,ld+rd);
        return max(ld,rd)+1;
    }
};