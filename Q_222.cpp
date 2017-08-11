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
    
  /*  int do_sum(int num){
        int count = 0;
        while(num >=0){
            count = count + pow(2,num);
            num--;
        }
        return count;
    }*/
    
    int countNodes(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int count = 0;
        
        TreeNode* left =root,*right = root;
        int hl = 0,hr= 0;
        
        for(hl = 0;left!=NULL;hl++,left=left->left);
        for(hr = 0;right!=NULL;hr++,right=right->right);
        
        //if(hl == hr)
        //    return do_sum(hl-1);
        
        // The below formula can be derived from sum of G.P.
        if(hl == hr)
            return pow(2,hl)-1;
        count = 1 + countNodes(root->left) + countNodes(root->right);
        
        return count;
    }
};
