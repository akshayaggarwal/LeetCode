class LRUCache {
public:
    int cap; 
    map<int,int> mymap;
    vector<int> mylist;
    
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(mymap.find(key)==mymap.end())
            return -1;
        vector<int>::iterator it=mylist.begin();
        while(*it!=key)
            it++;
        mylist.erase(it);
        mylist.push_back(key);
        return mymap[key];
    }
    
    void put(int key, int value) {
        if(mymap.find(key)!=mymap.end()){
            vector<int>::iterator it=mylist.begin();
            while(*it!=key)
                it++;
            mylist.erase(it);
        }
        else if(mylist.size()==cap){
            vector<int>::iterator it=mylist.begin();
            mymap.erase(*it);
            mylist.erase(it);
        }
        mymap[key]=value;
        mylist.push_back(key);   
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
