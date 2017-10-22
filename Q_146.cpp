class LRUCache {
public:
    int cap;
    map<int,int> mymap;
    vector<int> lru_vec;
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(mymap.find(key) == mymap.end())
            return -1;
        else{
            int i;
            for(i=0;i<lru_vec.size();i++){
                if(lru_vec[i] == key)
                    break;
            }
            lru_vec.erase(lru_vec.begin()+i);
            lru_vec.push_back(key);
            return mymap[key];
        }
    }
    
    void put(int key, int value){
        if(mymap.find(key)!=mymap.end()){
            int i;
            for(i=0;i<lru_vec.size();i++){
                if(lru_vec[i] == key)
                    break;
            }
            lru_vec.erase(lru_vec.begin()+i);  
        }
        else if(mymap.size()==cap){
            mymap.erase(lru_vec[0]);
            lru_vec.erase(lru_vec.begin());
        }
        lru_vec.push_back(key);
        mymap[key] = value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
