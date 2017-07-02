/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "#";
        else{
            return to_string(root->val)+","+serialize(root->left)+","+serialize(root->right);
        }
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        return create_tree(data);
    }
    
    TreeNode* create_tree(string &data){
        
        if(data[0] == '#'){
            if(data.size()>1)
                   data = data.substr(2);
            return NULL;
        }
        else{
            TreeNode* mynode = new TreeNode(helper(data));
            mynode->left = create_tree(data);
            mynode->right = create_tree(data);
            return mynode;
        }
    }
    
    int helper(string &data){
    
            int pos = data.find(',');
            int ret = stoi(data.substr(0,pos));
            data = data.substr(pos+1);
            return ret;
            
    }
    
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
