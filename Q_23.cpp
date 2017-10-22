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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<int> myset;
        int i;
        for(i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                myset.insert(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        multiset<int>::iterator it = myset.begin();
        ListNode *st = NULL,*head = NULL,*temp = NULL;
        int flag = 0;

        while(it != myset.end()){
            temp = new ListNode(*it);
            if(flag != 0){
                head->next = temp;
                head = temp;
            }
            else{
                head = temp;
                flag = 1;
                st = temp;
            }
            it++;
        }
       
        return st;
    }
};
