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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> myvec;
        ListNode* temp;
        int i,j,m;
        
        temp=head;
        while(temp!=NULL){
            myvec.push_back(temp->val);
            temp=temp->next;
        }
        
        for(m=0;m+k-1<myvec.size();m+=k){
            for(i=m,j=i+k-1;i<j;i++,j--)
                swap(myvec[i],myvec[j]);
        }
        
        temp=head;
        i=0;
        
        
        
        while(temp!=NULL){
            temp->val = myvec[i++];
            temp=temp->next;
        }
        
        return head;
    }
};
