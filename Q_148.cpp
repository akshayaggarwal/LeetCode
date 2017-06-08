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
    ListNode* sortList(ListNode* head) {
        
        vector<int> vec;
        ListNode* temp;
        
        int i;
        
        temp = head;
        
        while(head != NULL)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        
        sort(vec.begin(),vec.end());
        
        head = temp;
        
        i = 0;
        
        while(head != NULL)
        {
            head->val = vec[i];
            head = head->next;
            i++;
        }
        
        return temp;
        
    }
};
