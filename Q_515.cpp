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
    map<int,int> mymap;
    
    void fillmap(TreeNode *node,int num){
        if(node==NULL)
            return;
        if(mymap.find(num)==mymap.end())
            mymap[num]=node->val;
        else if(mymap[num]<node->val)
            mymap[num]=node->val;
        
        fillmap(node->left,num+1);
        fillmap(node->right,num+1);
        return;
    }
    
    vector<int> largestValues(TreeNode* root) {
        fillmap(root,0);
        vector<int> ret;
        map<int,int>::iterator it=mymap.begin();
        while(it!=mymap.end()){
            ret.push_back(it->second);
            it++;
        }
        return ret;
    }
};
