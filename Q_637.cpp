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
    
    map<int,vector<double>> mymap;
    
    void fill_map(TreeNode *root,int count){
        if(root == NULL)
            return;
        
        vector<double> ins;
        if(mymap.find(count) != mymap.end()){
            ins = mymap[count];
            ins[0] += root->val;
            ins[1]++;
        }
        else{
            ins.push_back(root->val);
            ins.push_back(1);
        }
        mymap[count] = ins;
        
        fill_map(root->left,count+1);
        fill_map(root->right,count+1);
            
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
            
        fill_map(root,0);
        
        vector<double> ret;
        vector<double> ins;
        
        for(map<int,vector<double>>::iterator it = mymap.begin();it!=mymap.end();it++){
        
                ins = it->second;
                ret.push_back((double)ins[0]/(double)ins[1]);
                
            }
        return ret;
    }
};
