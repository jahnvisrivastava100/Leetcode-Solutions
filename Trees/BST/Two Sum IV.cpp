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
//Naive approach
class Solution {
public:
     void inorder(TreeNode* root, vector<int> &v)
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
   
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
       v= inorderTraversal(root);
        int f=0;
        unordered_map<int,int>m;
        
        for(int i=0;i<v.size();i++)
        {
            if(m.find(k-v[i])!= m.end())
            {
             f=1;
            }
            else{
                m[v[i]]=i;
            }
        }
        
    if(f==0)
        return false;
   else{ return true;}
    }   

};
