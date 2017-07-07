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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        if(nums.size()==0)
            return NULL;
        else if(nums.size()==1)
            return new TreeNode(nums[0]);
        
        int middle = nums.size()/2;
        
        TreeNode *head = new TreeNode(nums[middle]);
        vector<int> vec1(nums.begin(),nums.begin()+middle);
        vector<int> vec2(nums.begin()+middle+1,nums.end());
        
        head->left = sortedArrayToBST(vec1);
        head->right = sortedArrayToBST(vec2);
        
        return head;
    }
};
