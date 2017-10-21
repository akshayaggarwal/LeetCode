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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL)
            return NULL;
        ListNode *first = new ListNode(0);
        ListNode *temp;
        int flag = 0;
        while(head != NULL){
            if(flag == 0){
                first->val = head->val;
                flag = 1;
            }
            else{
                temp = new ListNode(0);
                temp->val = head->val;
                temp->next = first;
                first = temp;
            }
            head = head->next;
        }
        return first;
    }
};
