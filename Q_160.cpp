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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> myset;
        ListNode *tempa=headA;
        ListNode *tempb=headB;
        while(tempa!=NULL){
            myset.insert(tempa);
            tempa=tempa->next;
        }
        while(tempb!=NULL){
            if(myset.find(tempb)!=myset.end())
                return tempb;
            tempb=tempb->next;
        }
        return NULL;
    }
};
