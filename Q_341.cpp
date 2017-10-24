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
class NestedIterator {
public:
    int j,si;
    vector<int> mylist;
    
    void fill_list(vector<NestedInteger> &nestedList){
        int i;
        for(i=0;i<nestedList.size();i++){
           if(nestedList[i].isInteger() == true){
                mylist.push_back(nestedList[i].getInteger());
            }
            else{
                fill_list(nestedList[i].getList());
            }
        }
        si = mylist.size();
        j = 0;
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        fill_list(nestedList);
    }

    int next() {
        return mylist[j++];
    }

    bool hasNext() {
            return j<si;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
