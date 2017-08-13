/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    
    int ret,depth;
    
    void check_list(vector<NestedInteger>& NestedList, int n){
        int i;
        for(i=0;i<NestedList.size();i++){
            if(NestedList[i].isInteger() == true){
                ret += n * NestedList[i].getInteger();
                printf("adding %d \n",n * NestedList[i].getInteger());
            }
            else
                check_list(NestedList[i].getList(),n-1);
        }
    }
    
    void find_depth(vector<NestedInteger>& NestedList, int n){
        int i;
        depth = max(depth,n);
        for(i=0;i<NestedList.size();i++){
            if(NestedList[i].isInteger() == false)
               find_depth(NestedList[i].getList(),n+1);
        }
    }
    
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        ret = 0;
        depth = 0;
        find_depth(nestedList,1);
        printf("depth is %d \n",depth);
        check_list(nestedList,depth);
        
        return ret;
    }
};
