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
    bool hasCycle(ListNode *head) {
        set<ListNode*> myset;
        while(head!=NULL){
            if(myset.find(head)!=myset.end())
                return true;
            myset.insert(head);
            head=head->next;
        }
        return false;
    }
};
