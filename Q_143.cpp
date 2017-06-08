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
    void reorderList(ListNode* head) {
        
        if(head == NULL)
            return;
            
        vector<int> vec;
        vector<int> vec2;
        ListNode *temp;
        
        int i,k;
        
        temp = head;
        
        while(head!=NULL)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        
        //for(i=0;i<vec.size();i++)
         //   printf("vec is %d\n",vec[i]);
        
        i = 0;//vec.size();
        k = vec.size() - 1;;
        
        //printf("value of k is %d\n",k);
        //printf("vec siz is %d\n",vec.size());
        
        for(i=0;i<vec.size()/2;i++)
        {

        //printf("inside loop pushing vec[i] is %d\n",vec[i]);
        //printf("inside loop pushing vec[k] is %d\n",vec[k]);

            vec2.push_back(vec[i]);
            vec2.push_back(vec[k]);
            k--;
        }
        
        if(vec.size()%2 != 0){
           // printf("inside loop pushing vec[i] is %d\n",vec[i]);
            vec2.push_back(vec[i]);
        }
        
        head = temp;
        i = 0;
        //printf("reached");
        while(head != NULL)
        {
            head->val = vec2[i];
            i++;
            head = head->next;
        }
        
        head = temp;
    }
};
