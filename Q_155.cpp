class MinStack {
public:
    /** initialize your data structure here. */
    
    vector<int> myvec;
    map<int,int> mymap;
    
    //int min;
    
    MinStack() {
//            min = INT_MAX;
    }
    
    void push(int x) {
        
        myvec.push_back(x);
        mymap[x]++;
        
    }
    
    void pop() {
        if(mymap[myvec[myvec.size()-1]] >1)
            mymap[myvec[myvec.size()-1]]--;
        else
            mymap.erase(myvec[myvec.size()-1]);

        myvec.erase(myvec.end()-1);
        
    }
    
    int top() {
        
        return myvec[myvec.size()-1];
        
    }
    
    int getMin() {
                
            return mymap.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
