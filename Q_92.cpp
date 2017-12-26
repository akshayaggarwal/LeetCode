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
        if(head==NULL||m==n)
            return head;
        vector<ListNode*> myvec;
        ListNode*cur;
        int i=1,j,si;
        cur=head;
        while(cur!=NULL){
            if(i>=m&&i<=n)
                myvec.push_back(cur);
            cur=cur->next;
            i++;
        }
        si = myvec.size();
        for(i=0,j=si-1;i<si/2;i++,j--)
            swap(myvec[i]->val,myvec[j]->val);
        return head;
    }
};
