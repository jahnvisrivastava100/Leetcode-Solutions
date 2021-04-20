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
    int c=0,n;
    void inorder (TreeNode* root,int k){
       
        if(root)
        {
            inorder(root->left,k);
            c++;
            if(c==k)
            {
                n=root->val;
            }
            inorder(root->right,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        c=0;
        inorder(root,k);
        return n;
    }
};
