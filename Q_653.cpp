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
    
    void fill_map(TreeNode* root, int k){
    
        if(root == NULL)
            return;
        
            printf("yes\n");
            mymap[root->val]++;
            fill_map(root->left,k);
            fill_map(root->right,k);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        fill_map(root,k);
        printf("mymap size %d \n",mymap.size());
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
            int a = it->first;
            int b = k - a;
            
            if(a==b && it->second > 1){
                printf("it second is %d\n",it->second);
                return true;
            }
            else if(a!=b && mymap.find(k-a) != mymap.end())
                return true;
            
        }
        
        return false;
    }
};
