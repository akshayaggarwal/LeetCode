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
    ListNode* deleteDuplicates(ListNode* head) {

       if(head == NULL)
           return NULL;
        
        ListNode *ret = NULL,*temp = NULL,*temp2,*temp3;
        int count,flag = 0,prev;
        
        while(head != NULL){
        
            prev = head->val;
            //
            
            count = 0;
            temp2 = head;
            //head = head->next;
            while(head!=NULL && prev == head->val){
                
                count++;
                head = head->next;
            }
            
            if(count == 1){
                
                if(flag == 0){
                    temp = new ListNode(temp2->val);
                    ret = temp;
                    //temp = head;
                    flag = 1;
                }
                else{
                    temp3 = new ListNode(temp2->val);
                    //temp3->val = head->val;
                    temp->next = temp3;
                    temp = temp3;
                    //head = head->next;
                }
            }
            
        }
        
        return ret;
        
    }
};
