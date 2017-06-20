/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:

    int sum = 0;
    
    int findsum(vector<NestedInteger>& nestedList,int k){
        
        if(nestedList.size() == 0)
            return 0;
        
        int count = 0,sumo,i;
        
        sumo = 0;
        
        for(i=0;i<nestedList.size();i++){
            
           // printf("sumo is %d\n",sumo);
            if(nestedList[i].isInteger() == true){
                sumo += k*nestedList[i].getInteger();
            }
            else{
                sumo += findsum(nestedList[i].getList(),k+1); 
            }

        }
        
        return sumo;
        
    }
    
    int depthSum(vector<NestedInteger>& nestedList) {
        
        if(nestedList.size() == 0)
            return 0;
        
        return findsum(nestedList,1);
        
    }
};
