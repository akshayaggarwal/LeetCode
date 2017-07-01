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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
      
      int i,a;
      
      vector<vector<int>> ret;
      TreeNode* root_temp;
      
      if(root == NULL)
        return ret;
        
      int level = 1;
      
      ret.push_back(vector<int>());
      ret[0].push_back(root->val);
      
      vector<TreeNode*> vec;
      
      vec.push_back(root);
      
      while(true)
      {
          a = vec.size();
          for(i=0;i<a;i++) {
              
          root_temp = vec[i];
          
          if(root_temp->left == NULL && root_temp->right == NULL){
           // printf("reached value is %d \n",root_temp->val);
            continue;
          }
            
          if(root_temp->left!=NULL)
          {
              if(ret.size() == level)
                ret.push_back(vector<int>());
              ret[level].push_back(root_temp->left->val);
              vec.push_back(root_temp->left);
          }
          
          if(root_temp->right!=NULL)
          {
              if(ret.size() == level)
                ret.push_back(vector<int>());
              ret[level].push_back(root_temp->right->val);
              vec.push_back(root_temp->right);
          }
          
        }
        
        
        //printf("vec size1 is %d\n",vec.size());
        
        /*for(i=0;i<vec.size();i++){
                printf("val before is %d \n",vec[i]->val);
        }*/
        
        vec.erase(vec.begin(),vec.begin()+a);
        level++;
        
       /* for(i=0;i<vec.size();i++){
                printf("val is %d \n",vec[i]->val);
        }*/
        //printf("vec size2 is %d\n",vec.size());
        if(vec.size() == 0)
            return ret;
      }
    }
};
