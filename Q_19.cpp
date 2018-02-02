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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head, *prev=head, *ret=head;
        while(temp!=NULL&&n>0){
            temp=temp->next;
            n--;
        }
        if(temp==NULL)
            return head->next;
        while(temp!=NULL){
            prev=head;
            head=head->next;
            temp=temp->next;
        }
        prev->next=head->next;
        return ret;
    }
};
