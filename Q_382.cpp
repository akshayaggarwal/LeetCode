/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    ListNode *root;
    int cap;
    
    Solution(ListNode* head) {
        root = head;
        ListNode *temp = head;
        cap = 0;
        
        while(temp != NULL){
            cap++;
            temp = temp->next;
        }

    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int a = rand() % cap;
        ListNode *temp = root;
        while(a>0){
            temp = temp->next;
            a--;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */
