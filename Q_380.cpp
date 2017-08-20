class RandomizedSet {
public:
    /** Initialize your data structure here. */
    map<int,int> mymap;
    map<int,int> revmap;
    vector<int> del;
    int cap;
    
    RandomizedSet() {
        cap = 0;
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
       
      
        int ins;
            if(revmap.find(val) == revmap.end()){
                if(del.size() == 0){
                    ins = mymap.size();
                    cap++;
            }
            else{
                ins = del[0];
                del.erase(del.begin()+0);
            }
            revmap[val] = ins;
            mymap[ins] = val;
            return true;
            }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
     
        if(revmap.find(val) != revmap.end()){
            int a = revmap[val];
            del.push_back(a);
            revmap.erase(val);
            mymap.erase(a);
            return true;
        }
        return false;
        
    }
    
    /** Get a random element from the set. */
    int getRandom() {
       
        int a = 0;
        a = rand() % (cap);
        
        while(find(del.begin(),del.end(),a) != del.end())
            a = rand() % (cap);

        return mymap[a];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
