/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:

    vector<int> myvec;
    int si;

    void treefill(TreeNode *root){
        
        if(root == NULL)
            return;

        if(root->left == NULL && root->right == NULL){
            myvec.push_back(root->val);
            return;
        }
            
        if(root->left != NULL)
            treefill(root->left);
        
        myvec.push_back(root->val);
        
        if(root->right != NULL)
            treefill(root->right);
        
    }

    BSTIterator(TreeNode *root) {
        treefill(root);
        si = 0;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(si<myvec.size()){
            //si++;
            return true;
        }
        else
            return false;
    }

    /** @return the next smallest number */
    int next() {
        
        if(si<myvec.size()){
            si++;
            return myvec[si-1];
        }
        
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
