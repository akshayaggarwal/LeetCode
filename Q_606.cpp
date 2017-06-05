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

    string str;
  
    
    void checko(TreeNode* t)
    {
        int mt = 0;
        string res;
        ostringstream convert;  
            
        convert << t->val;
        res = convert.str();
            
        // storing number since not NULL
        str = str + '(';
        str = str + res;
        
        mt++;
            
        if(t->left == NULL && t->right != NULL)
            str = str + "()";
    
        if(t->left != NULL)
            checko(t->left);
            
        if(t->right != NULL)
            checko(t->right);
                
        while(mt != 0){
            mt--;
            str += ")";
        }
                
        return;
        
    }
    
    string tree2str(TreeNode* t) {
        
        str = "";
        if(t==NULL)
            return str;
        else{
        
            string res;
            ostringstream convert;  
            
            convert << t->val;
            res = convert.str();
            str = str + res;
            
        }
        int mt = 0;
        
        if(t->left == NULL && t->right != NULL)
                str = str + "()";
            
            if(t->left != NULL)
                checko(t->left);
                
            if(t->right != NULL)
                checko(t->right);
        
            while(mt != 0){
                mt--;
                str += ")";
                }
        return str;
            
    }
};
