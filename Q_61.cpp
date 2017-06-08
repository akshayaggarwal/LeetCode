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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0)
            return head;
            
        vector<int> vec;
        
        int i,j,cnt;
        
        ListNode* temp;
        temp = head;
        
        while(head!=NULL)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        
        if(vec.size() <= 1 )
            return temp;
        
        if(k>=vec.size())
            k = k%vec.size();
         
        if(k==0)
            return temp; 
         
       // printf("value of k is %d \n",k);
    //    printf("vec.size() is %d \n",vec.size());
        
      //  for(i=0;i<vec.size();i++)
        //    printf("vec value is %d\n",vec[i]);
            
        int arr[vec.size()];
        
        cnt = 0;
        
        for(i=k-1,j=vec.size()-1;cnt<vec.size();)
        {
            arr[i] = vec[j];
            if(j == vec.size()-1)
                j = 0;
            else
                j++;
                
            if(i == vec.size()-1)
                i = 0;
            else
                i++;
                
            cnt++;
        }
        
        i = 0;
        head = temp;
        
        while(head!=NULL)
        {
            head->val = arr[i];
            head = head->next;
            i++;
        }
        
        return temp;
    }
};
