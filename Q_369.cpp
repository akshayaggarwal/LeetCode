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
    ListNode* plusOne(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        ListNode *temp;
        vector<int> myvec;
        temp = head;
        int a,i,carry;
        
        carry = 0;
        temp = head;
        
        while(head!=NULL){
            myvec.push_back(head->val);
            head=head->next;
        }
        
        a = myvec[myvec.size()-1]+carry + 1;
        if(a>9){
            carry = 1;
            myvec[myvec.size()-1] = a%10;
        
        for(i=myvec.size()-2;i>=0;i--){
            
        a = myvec[i]+carry;
        
        if(a>9){
            carry = 1;
            myvec[i] = a%10;
        }
        else{
            myvec[i] = a;
            carry = 0;
            break;
        }
            
        }
        }
        else{
            myvec[myvec.size()-1] = a;
            carry = 0;
        }
        head = temp;
        i = 0;
        
        
        
        //printf("myvec.size() is %d\n",myvec.size());
        
        while(head!=NULL){
            (head->val) = myvec[i];
            i++;
            head=head->next;
        }
        
       
       //printf("myvec.size() is %d\n",myvec.size());
         if(carry!=0){
            ListNode * mynode = new ListNode(1);
            mynode->next = temp;
            return mynode;
            //myvec.insert(myvec.begin(),1);
        }
        
        return temp;
        
    }
};
