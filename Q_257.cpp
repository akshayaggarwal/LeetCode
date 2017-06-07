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
    
    vector<string> binaryTreePaths(TreeNode* root) {
    
        vector<string> ret;
        string str = "";
        
        int prev,k,a,cnt2;
        
        vector<int> cnt;
     
        if(root == NULL)
            return ret;
        
        TreeNode *temp;
        
        std::stack<TreeNode*> mystack;
        
        mystack.push(root);
        
        //cnt[0] = 0;
        
        while(mystack.size() > 0)
        {
            temp  = mystack.top();
            mystack.pop();
            
            str = str + to_string(temp->val);
            
            if(temp->left == NULL && temp->right == NULL){
                
                //printf("reached1\n");
                ret.push_back(str);
                
                //cout<<"pushing "<<str<<endl;
                
                a = 0;
                k = str.size()-1;
                //printf("cnt = %d\n",cnt);
               
                if(cnt.size()>0){ 
                    
                cnt2 = cnt[cnt.size()-1];
                
                cnt.pop_back();
                
                while(a<cnt2)
                {
                    if(str[k] == '>')
                        a++;
                    k--;
                }
                if(k>=0)
                    str.erase(k,str.size());
                //cnt = 0;
                }
                if(mystack.size() != 0)
                    str = str + "->";
                continue;
            }
            else{
                str = str + "->";
            }
            
            if(temp->left != NULL && temp->right != NULL){
                //cnt[cnt.size()-1];
                if(cnt.size()>0 && cnt[cnt.size()-1]>=1){
                cnt[cnt.size()-1]++;
                cnt.push_back(1);
                }
                else if(cnt.size() == 0){
                    cnt.push_back(1);
                    cnt.push_back(1);
                }
                else
                {
                    cnt.push_back(2);
                    cnt.push_back(1);
                }
                
            }
            else{
                if(cnt.size() == 0)
                    cnt.push_back(1);
                else
                    cnt[cnt.size()-1]++;
            }
            if(temp->right != NULL)
            {
                mystack.push(temp->right);
            }
            
            if(temp->left != NULL)
            {
                mystack.push(temp->left);
            }
        }
        
        return ret;
    }
};
