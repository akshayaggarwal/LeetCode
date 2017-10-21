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
        int k,i = 1;
        int j = n;
        ListNode *temp,*st = head;
        while(i<=(m+n)/2){
            if(i>=m){
                temp = head;
                for(k=i;k<j;k++)
                    temp = temp->next;
                swap(temp->val,head->val);
                j--;
            }
            i++;
            head = head->next;
        }
        return st;
    }
};
