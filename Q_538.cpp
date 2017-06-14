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
    
    void greatertree(TreeNode *root,int a){
        
        stack<TreeNode*> st;
        TreeNode *temp;
        
        if(root == NULL)
            return;
        
        //temp = root;
        root->val += a;
        if(root->right != NULL)
            st.push(root->right);
        
        while(st.size() != 0)
        {
            temp = st.top();
            st.pop();
            root->val += temp->val;

            if(temp->right != NULL){
                st.push(temp->right);
            }
            if(temp->left != NULL){
                st.push(temp->left);
            }
        }
        
        greatertree(root->right,a);
        greatertree(root->left,root->val);
        
        
        return;
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
     
        greatertree(root,0); 
        return root;
    } 
};
