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
        if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        ListNode *ret,*prev,*prev2;
        l1->val<l2->val?ret=l1:ret=l2;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<l2->val){
                while(l1!=NULL&&l1->val<=l2->val){
                    prev=l1;
                    l1=l1->next;
                }
                if(l1==NULL){
                    prev->next=l2;
                    return ret;
                }
                else{
                    prev->next=l2;
                }
            }
            else{
                while(l2!=NULL&&l2->val<=l1->val){
                    prev2=l2;
                    l2=l2->next;
                }
                if(l2==NULL){
                    prev2->next=l1;
                    return ret;
                }
                else{
                    prev2->next=l1;
                }
            }
        }
        return ret;
    }
};
