class HitCounter {
public:
    /** Initialize your data structure here. */
    
    map<int,int> mymap;
    
    HitCounter() {
        
    }
    
    /** Record a hit.
        @param timestamp - The current timestamp (in seconds granularity). */
    void hit(int timestamp) {
        mymap[timestamp]++;
    }
    
    /** Return the number of hits in the past 5 minutes.
        @param timestamp - The current timestamp (in seconds granularity). */
    int getHits(int timestamp) {
        map<int,int>::iterator it = mymap.begin();
        int counter=0;
        while(it!=mymap.end()){
            if(timestamp-it->first<300)
                counter+=it->second;
            it++;
        }
        return counter;
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter obj = new HitCounter();
 * obj.hit(timestamp);
 * int param_2 = obj.getHits(timestamp);
 */
