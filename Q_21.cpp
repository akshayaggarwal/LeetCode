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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        ListNode *head,*temp,*l1prev;
        head = l1;
        while(l1!=NULL && l2!=NULL){
            if(l1->val >l2->val){
                temp = new ListNode(0);
                temp->val = l1->val;
                l1->val = l2->val;
                temp->next = l1->next;
                l1->next = temp;
                l2 = l2->next;
            }
            else{
                l1prev = l1;
                l1 = l1->next;
            }
        }
        if(l1 == NULL)
            l1prev->next = l2;

        return head;
    }
};
