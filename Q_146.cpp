class LRUCache {
public:

    map<int,int> mymap;
    int si;
    
    vector<int> myvec;

    LRUCache(int capacity) {
        si = capacity;
    }
    
    int get(int key) {
        
        int i;

        if(mymap.find(key) != mymap.end()){   
            i = 0;
            for(i=0;i<myvec.size();i++){
                if(myvec[i] == key)
                    break;
            }
          
            myvec.erase(myvec.begin()+i);       
            myvec.push_back(key);
          
            return mymap[key];
        }
        else
            return -1;
    }
    
    void put(int key, int value) {              
        
        if(mymap.find(key) != mymap.end()){     
               
            int i;   
            
            for(i=0;i<myvec.size();i++){
                if(myvec[i] == key)
                    break;
            }

            myvec.erase(myvec.begin()+i);
            
        }
        else if(mymap.size() == si)                  
        {
            mymap.erase(myvec[0]);                       
            myvec.erase(myvec.begin());
        }
        
          mymap[key] = value;
          myvec.push_back(key);
            
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
