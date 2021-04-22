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
 
 /*   void inorder(TreeNode* root, vector<int> &v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);     // traverse left tree
        v.push_back(root->val);    //push the value
        inorder(root->right,v);     // traverse right tree
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL)    
            return v;
        if(root->left==NULL && root->right==NULL)   // if only one node is present
        {  
           v.push_back(root->val);
            return v;
        }
        inorder(root,v);    
        return v;
    }
};*/
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        while(true){
            if(root != NULL){
                s.push(root);
               
                root=root->left;
            }
            
            else{
                if(s.empty()){break;}
                root=s.top();
                v.push_back(root->val);
                s.pop();
                root=root->right;
            }
            
        }
        return v;
    } 
};
