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
    map<int,map<int,vector<int>>> mymap;
    
    void fillmap(TreeNode* node,int val,int ht){
        mymap[val][ht].push_back(node->val);
        if(node->left!=NULL)
            fillmap(node->left,val-1,ht+1);
        if(node->right!=NULL)
            fillmap(node->right,val+1,ht+1);
    }
    vector<vector<int>> verticalOrder(TreeNode* root) {
        
        vector<vector<int>> ret;
        if(root == NULL)
            return ret;
        fillmap(root,0,0);
        map<int,map<int,vector<int>>>::iterator it=mymap.begin();
        map<int,vector<int>>::iterator it2;
        int j=0,k=0;
        while(it!=mymap.end()){
            it2=it->second.begin();
            vector<int> temp;
            while(it2!=it->second.end()){
                
                for(j=0;j<it2->second.size();j++)
                    temp.push_back(it2->second[j]);
                
                it2++;
            }
            ret.push_back(temp);
            it++;
            k++;
        }
        return ret;
    }
};
