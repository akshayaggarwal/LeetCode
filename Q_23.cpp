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
        
        if(lists.size() == 0)
            return NULL;
        
        multiset<int> myset;
        int i;
        
        
        for(i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                myset.insert(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        
        if(myset.size() == 0)
            return NULL;
            
        ListNode *root = new ListNode(0);
        ListNode *tmp = root;
        i = 0;
        
        for(multiset<int>::iterator it = myset.begin();it!=myset.end();it++){
            
            root->val = *it;
            
            ListNode *newroot = new ListNode(0);
            if(i<myset.size()-1){
                root->next = newroot;
                root = newroot;
            }
            else{
                root->next = NULL;
            }
            
            i++;
        }
        
        root = NULL;
        
        return tmp;
        
    }
};
