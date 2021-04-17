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
     int preIndex = 0;

    int search(vector<int>& inorder, int strt, int end, int value)
     {int k;
        for (int i = strt; i <= end; i++)
        {
            if (inorder[i] == value)
                k = i;
        }
        return k;
   }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int inStrt,int inEnd){
        
        if (inStrt > inEnd)
            return NULL;

        TreeNode* Node = new TreeNode(preorder[preIndex]);
        preIndex++;
        if (inStrt == inEnd)
            return Node;


        int inIndex = search(inorder, inStrt, inEnd, Node->val);


        Node->left = build(preorder, inorder, inStrt, inIndex - 1);
        Node->right = build(preorder, inorder, inIndex + 1, inEnd);

        return Node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len =size(inorder);
        TreeNode* root = build(preorder,inorder, 0, len-1);
        return root;
    }
};

/*class Solution {
public:
int preIndex = 0;
TreeNode* buildTreeMap(vector<int>& preorder, vector<int>& inorder,int len)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < len; i++)
        mp[inorder[i]] = i;
 
    return build(preorder, inorder, 0, len - 1, mp);
}
    
TreeNode* build(vector<int>& preorder, vector<int>& inorder,int inStrt,
                       int inEnd, unordered_map<int, int>& mp)
{
    
    if (inStrt >inEnd)
        return NULL;
 
    int curr = preorder[preIndex++];
    TreeNode* Node = new TreeNode(curr);
 
    
    if (inStrt == inEnd)
        return Node;
 
    int inIndex = mp[curr];
 
    
    Node->left = build(preorder, inorder, inStrt, inIndex - 1, mp);
    Node->right = build(preorder, inorder, inIndex + 1, inEnd, mp);
 
    return Node;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len = inorder.size();
        TreeNode* root =buildTreeMap(preorder,inorder,len);
        return root;
       
    }
};
*/
