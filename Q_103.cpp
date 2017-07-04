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
    
    map<int,vector<int>> ret;
    
    void fillmap(TreeNode *root,int ht){
        
        if(root == NULL)
                return;
        
        ret[ht].push_back(root->val);
        
        fillmap(root->left,ht+1);
        fillmap(root->right,ht+1);
        
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
       vector<vector<int>> myvec;
       
       fillmap(root,0); 
        
       int i = 0; 
       for(map<int,vector<int>>::iterator it = ret.begin();it!=ret.end();it++){
           if(i%2 != 0){
               reverse(it->second.begin(),it->second.end());
           }
           
           myvec.push_back(it->second);
           i++;
       }
        
       return myvec;
        
    }
};
