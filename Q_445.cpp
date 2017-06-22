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
        
        vector<int> myvec1,myvec2;
        
        vector<int> ret;
        
        int carry,i,j,a;
        
        while(l1 != NULL){
            myvec1.push_back(l1->val);
            l1 = l1->next;
        }
        
        while(l2 != NULL){
            myvec2.push_back(l2->val);
            l2 = l2->next;
        }
        
        i = myvec1.size()-1;
        j = myvec2.size()-1;
        
        carry = 0;
        printf("here 0\n");
        while(i>=0 && j>=0){
            
            a = myvec1[i] + myvec2[j] + carry;
            printf("a is %d \n",a);
            if(a>9){
                carry = 1;
                a = a%10;
            }
            else
                carry = 0;
                
            ret.push_back(a);

            i--;
            j--;
            
        }
        
        printf("here\n");
        
        while(i>=0){
            a = myvec1[i] + carry;
            if(a>9){
                carry = 1;
                a = a%10;
            }
            else
                carry = 0;

            ret.push_back(a);
            i--;
        }
        
        while(j>=0){
            a = myvec2[j] + carry;
            if(a>9){
                carry = 1;
                a = a%10;
                
            }
            else
                carry = 0;
                
            ret.push_back(a);    
            j--;
        }
        
        if(carry != 0)
            ret.push_back(carry);
            
        if(ret.size() == 0)
            return NULL;
            
        ListNode *head = new ListNode(0);//,*temp;
        ListNode *temp = head;
        
        printf("here\n");
        
        for(j=ret.size()-1;j>=0;j--){
            
            temp->val = ret[j];
            if(j!=0){
                ListNode *node1 = new ListNode(0);
                temp->next = node1;
                
                temp = node1;
            }
            
        }
        
        return head;
    }
};
