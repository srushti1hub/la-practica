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
    
    TreeNode* func(TreeNode* root,int val,int depth,int curr)
    {
        if(root==NULL)
            return NULL;
        
        if(depth-1==curr)
        {
            TreeNode* node = new TreeNode(val);
            TreeNode* node2=new TreeNode(val);
            node->left=root->left;
            node2->right=root->right;
            root->left=node;
            root->right=node2;
            return root;
        }
        
        root->left=func(root->left,val,depth,curr+1);
        root->right=func(root->right,val,depth,curr+1);
        
        return root;
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1)
        {
            TreeNode* temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        return func(root,val,depth,1);
    }
};
