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
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        // cout<<root->val<<endl;
        // if(root->val == val){
        //     return root;
        // }
        // if(root->left!=NULL) {
        //     searchBST(root->left,val);
        // }
        // if(root->right!=NULL) {
        //     searchBST(root->right,val);
        // }
        // return NULL;
        TreeNode* node = new TreeNode();
        if(root->val > val) node=searchBST(root->left,val);
        else if(root->val < val) node=searchBST(root->right,val);
        else node = root;
        return node;
    }
};