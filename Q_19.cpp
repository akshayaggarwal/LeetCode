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
        
        if(head == NULL)
            return NULL;
        
        if(head->next == NULL){
            if(n == 1)
                return NULL;
            else
                return head;
        }
        
        ListNode*temp1,*temp2;
        
        temp1 = head;
        temp2 = head;
        
       // n++;
        
        while(n>=0){
            if(temp1 == NULL)
                return head->next;
                
            temp1 = temp1->next;
            n--;
        }
        
        if(temp1 == NULL)
            temp2->next = temp2->next->next;
        
        else{
            while(temp1 != NULL){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            temp2->next = temp2->next->next;
        }
        return head;
    }
};
