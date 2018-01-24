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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode *ret = l1;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            if(l2!=NULL)
                l1->val=l1->val+l2->val+carry;
            else
                l1->val+=carry;
            if(l1->val>9){
                carry=l1->val/10;
                l1->val%=10;
            }
            else
                carry=0;
            if(((l2!=NULL && l2->next!=NULL)||carry!=0) && l1->next==NULL){
                ListNode *newnode = new ListNode(0);
                l1->next=newnode;
            }
            l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        
        return ret;
    }
};
