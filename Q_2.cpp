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
        
        vector<int> myvec1,myvec2,ret;
        
        int a,i,j,carry;
        
        while(l1!=NULL){
            myvec1.push_back(l1->val);
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            myvec2.push_back(l2->val);
            l2 = l2->next;
        }
        
        reverse(myvec1.begin(),myvec1.end());
        reverse(myvec2.begin(),myvec2.end());
        
        carry = 0;
        
        i = myvec1.size()-1;
        j = myvec2.size()-1;
        
        while(i>=0&&j>=0){
            a = myvec1[i] + myvec2[j] + carry;
            
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
    
        while(i>=0){
            a = myvec1[i] + carry;
//            printf("i is %d\n",i);
            printf("a is %d\n",a);
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
            //j--;
        }
        
        if(carry == 1)
            ret.push_back(carry);
        
        if(ret.size() == 0)
            return NULL;
            
       // reverse(ret.begin(),ret.end());
        
        ListNode *temp;// = new ListNode();
        ListNode *head = new ListNode(0);
        
        temp = head;
        
        head->val = ret[0];
        i = 1;
        
        while(i<ret.size()){
            ListNode *mynode = new ListNode(0);
            mynode->val = ret[i];
            head->next = mynode;
            head = head->next;
            i++;
        }
        
        return temp;
        
    }
};
