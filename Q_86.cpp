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
    ListNode* partition(ListNode* head, int x) {
        
        if(head == NULL)
            return NULL;
        
        ListNode *ret2;
        int i,flag = 0;
        ListNode *temp = head;
        ListNode *mynode = NULL;
        
        while(temp != NULL){
            if(temp->val < x){
                ListNode *ret =  new ListNode(temp->val);
                
                if(flag == 0){
                    ret2 = ret;
                    flag = 1;
                }else{
                    mynode->next = ret;
                    
                }
                mynode = ret;
            }
                temp = temp->next;
        }
        
        temp = head;
        
        while(temp != NULL){
            if(temp->val >= x){
                ListNode *ret =  new ListNode(temp->val);
        
                if(flag == 0){
                    ret2 = ret;
                    flag = 1;
                }else{
                    mynode->next = ret;
                    //mynode = ret;
                }
                mynode = ret;
                
            }
                temp = temp->next;
        }
        
        mynode->next = NULL;
        
        return ret2;
    }
};
