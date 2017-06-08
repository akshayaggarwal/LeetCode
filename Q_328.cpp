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
    ListNode* oddEvenList(ListNode* head) {
     
     vector<int> vec;
     vector<int> vec2;
     
     ListNode *temp;
     temp = head;
     
     int i;
     
     while(head != NULL)
     {
         vec.push_back(head->val);
         head = head->next;
     }
     
     for(i=0;i<vec.size();i+=2)
     {
         //if(i%2 == 0)
            vec2.push_back(vec[i]);
     }
     
     for(i=1;i<vec.size();i+=2)
     {
         //if(i%2 == 0)
            vec2.push_back(vec[i]);
     }
     
     head = temp;
     i = 0;
     
     while(head != NULL)
     {
         head->val = vec2[i];
         head = head->next;
         i++;
     }
     
     return temp;
     
    }
};
