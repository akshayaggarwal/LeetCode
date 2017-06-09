/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int finddepth(TreeNode *root)
    {
        if(root == NULL || (root->right==NULL && root->left == NULL))
            return 0;
        else
            return 1 + max(finddepth(root->left),finddepth(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL)
            return true;
            
        int a1 = root->left==NULL?0:1;
        int a2 = root->right==NULL?0:1;
        
        a1 = a1+finddepth(root->left);
        a2 = a2+finddepth(root->right);
        
       // printf("a1 is %d\n",a1);
        //printf("a2 is %d\n",a2);
        
        if(abs(a1-a2) <= 1)
            return (true & isBalanced(root->left) & isBalanced(root->right));
        else
            return false;
    }
};
