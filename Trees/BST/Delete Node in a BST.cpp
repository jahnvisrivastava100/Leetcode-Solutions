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
    TreeNode* FindMin( TreeNode* node)
    {
        TreeNode* current = node;

      while (current->left != NULL)
        current = current->left;
 
       return current;
      }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        
         if(key < root->val)
            root->left = deleteNode(root->left,key);
        else if(key > root->val)
            root->right = deleteNode(root->right,key);
        else{
            //we found
            //case 1:No child(leaf node is to be deleted)
            if(root->left == NULL && root->right == NULL) 
            {  
                delete root;
                root=NULL;
             //return root;//dangling pointer still have the address
            }
            //case 2 : 1 child
            else if(root->left == NULL){
                TreeNode* temp = root;
                root = root->right;
                delete temp;
             }
            else if(root->right == NULL){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
            }

        //case 3:2 children
         else{
          TreeNode* temp=FindMin(root->right);
          root->val=temp->val; 
             //by this recursion call we are removing the duplicate by passing the root->right             are in                  the root->right
          root->right=deleteNode(root->right,temp->val);
        }
    }
        return root;
        
    }
};
