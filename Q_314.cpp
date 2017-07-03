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
    

    
    /*void fillvec(TreeNode* head,int val){
        if(head == NULL)
            return;
        if(head->left != NULL)
            mymap[val-1].push_back(head->left->val);
        if(head->right != NULL)
            mymap[val+1].push_back(head->right->val);
        
        fillvec(head->left,val-1);
        fillvec(head->right,val+1);
    }*/
    
    vector<vector<int>> verticalOrder(TreeNode* root) {
       
        map<int,vector<int>> mymap;
        
        queue<pair<int,TreeNode*>> qu;
        
        vector<vector<int>> ret;
        vector<int> vec;
        
        TreeNode *node;
        if(root == NULL)
            return ret;
        
        qu.push(make_pair(0,root));
        
        while(! qu.empty()){
            
            mymap[qu.front().first].push_back(qu.front().second->val);
            
         
          
            if(qu.front().second->left != NULL)
                qu.push(make_pair(qu.front().first-1,qu.front().second->left));
            
            if(qu.front().second->right != NULL)
                qu.push(make_pair(qu.front().first+1,qu.front().second->right));
            
            qu.pop();
            
        }

        
        for(map<int,vector<int>>::iterator it = mymap.begin();it!=mymap.end();it++){
            vec = it->second;
            ret.push_back(vec);
        }
        
        return ret;
    }
};
