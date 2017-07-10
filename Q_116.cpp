/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    
    map<int,vector<TreeLinkNode*>> mymap;
    
    void fill_map(TreeLinkNode *root,int val){
        
        if(root == NULL)
            return;
        
        mymap[val].push_back(root);
        
        fill_map(root->left,val+1);
        fill_map(root->right,val+1);
        
    }
    
    void connect(TreeLinkNode *root) {
    
        fill_map(root,0);
        vector<TreeLinkNode*> myvec;
        int i;
        for(map<int,vector<TreeLinkNode*>>::iterator it = mymap.begin();it!=mymap.end();it++){
            myvec = it->second;
            if(myvec.size() == 1){
                myvec[0]->next = NULL;
            }
            else if(myvec.size()>1){
                for(i=0;i<myvec.size()-1;i++){
                    myvec[i]->next = myvec[i+1];
                }
                
                myvec[i]->next = NULL;    
            }
        }
        
    }
};
