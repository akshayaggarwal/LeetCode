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

    vector<vector<int>> ret;
    int knum = 1;//
    
    int fillvector(TreeNode *root,int a){

        int k1,k2,k,m;
        
        if(root == NULL)
            return a;// knum;
                
        if(root->left == NULL && root->right== NULL){
            
            ret[0].push_back(root->val);
            //root = NULL;
            //knum --;
            
            return a+1;// knum;
        }
        else{
          //  knum++;
            
            if(root->left != NULL)
                k1 = fillvector(root->left,0);
                
            if(root->right != NULL)
                k2 = fillvector(root->right,0);
        }
        
        if(root->right != NULL && root->left != NULL)
            k = k1>k2?k1:k2;
        else if(root->right != NULL)
            k = k2;
        else if(root->left != NULL)
            k = k1;
        
        
        if(ret.size()<(k+1)){
            m = k;
            while(ret.size()<(m+1)){
                ret.push_back(vector<int>());
                //m--;    
            }
        }
        
        
        ret[k].push_back(root->val);
        
        return k+1;// k+1;
    }
    
    vector<vector<int>> findLeaves(TreeNode* root) {
    
        vector<vector<int>> temp;
        int i;
        
        if(root == NULL)
            return ret;
        
        ret.push_back(vector<int>());
            
        fillvector(root,0);
    
        return ret;
        
    }
};
