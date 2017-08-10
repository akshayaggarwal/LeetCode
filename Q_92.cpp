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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        int j,i = 1;
        
        ListNode *temp;
        temp = head;
        
        if(head == NULL)
            return head;
        
        vector<ListNode*> myvec;
        
        while(i<m){
            printf("reached\n");
       //     if(head != NULL)
                head = head->next;
            i++;
            printf("value of i is %d \n",i);
        }    
        
        // now head is the starting position of swapping
                
        while(i<n){
            myvec.push_back(head);
            head = head->next;
            i++;
        }

        myvec.push_back(head);

        for(i=0,j=myvec.size()-1;i<j;i++,j--){
            
            swap(myvec[i]->val,myvec[j]->val);
            
        }
        
        return temp;
    }
};
