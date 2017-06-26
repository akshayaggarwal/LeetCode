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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *temp;
        int a;
        temp = head;
        
        while(temp!=NULL && temp->next!=NULL){
            a = temp->val;
            temp->val = temp->next->val;
            temp->next->val = a;
            
            temp = temp->next->next;
        }
        
        return head;
    }
};
