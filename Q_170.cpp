class TwoSum {
public:
    /** Initialize your data structure here. */
    
    map<int,int> mymap;
    
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        
        mymap[number]++;
        
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
     
        int a;

     for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
         
         a = value - it->first;
        
         if(a == it->first){
             if(it->second > 1)
                return true;
             else   
                return false;
         }
         else if(mymap.find(a)!=mymap.end())
            return true;
         
     }
     
     return false;   
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * bool param_2 = obj.find(value);
 */
