class MovingAverage {
public:
    /** Initialize your data structure here. */
    
    queue<int> vec;
    int si;
    
    double cur_avg;
    
    MovingAverage(int size) {
     
        si = size;
        cur_avg = 0;
        
    }
    
    double next(int val) {
        
        int d;
        
        if(vec.size() == si){
            d = vec.front();
            vec.pop();
            cur_avg -= d;
            cur_avg += val;
            vec.push(val);
            return cur_avg/si;
        }   
        else{
            vec.push(val);
            cur_avg += val;
            return cur_avg/vec.size();
        }
            
        return cur_avg/vec.size();
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
