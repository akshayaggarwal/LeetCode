class MaxStack {
public:
    /** initialize your data structure here. */
    
    vector<int> myvec;

    MaxStack() {
    }
    
    void push(int x) {
        myvec.push_back(x);
    }
    
    int pop() {
        int a = myvec[myvec.size()-1];
        myvec.pop_back();
        return a;
    }
    
    int top() {
        return myvec[myvec.size()-1];
    }
    
    int peekMax() {
        int i,a=INT_MIN;
        for(i=0;i<myvec.size();i++){
            if(myvec[i]>a)
                a = myvec[i];
        }
        return a;
    }
    
    int popMax() {
        int i,a=INT_MIN,j;
        for(i=0;i<myvec.size();i++){
            if(myvec[i]>=a){
                a = myvec[i];
                j = i;
            }
        }
        myvec.erase(myvec.begin()+j);
        return a;
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack obj = new MaxStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.peekMax();
 * int param_5 = obj.popMax();
 */
