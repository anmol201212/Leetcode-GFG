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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vec;
    queue<TreeNode*> q;
    int k=0;
    q.push(root);
    if(root==NULL) return vec;
    while(q.empty()!=true){
        vector<int>vec1;
        int count=q.size();
        for(int i=0;i<count;i++){
            TreeNode  *curr=q.front();
            q.pop();
            vec1.push_back(curr->val);
            if(curr->left!=NULL) {
                q.push(curr->left);
            }
            if(curr->right!=NULL) {
                q.push(curr->right);
            }
        }
        vec.push_back(vec1);
        k++;
    }
    return vec;
    }
};