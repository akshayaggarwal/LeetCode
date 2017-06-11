class Logger {
public:
    /** Initialize your data structure here. */
    
    map<string,int> mymap;
    
    Logger() {
            
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        
        if(mymap.find(message) != mymap.end()){
            if(abs(timestamp - mymap[message]) >=10){
                mymap[message] = timestamp;
                return true;
            }
            else{
                return false;
            }
        }
        else{
            mymap[message] = timestamp;
            return true;
        }
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.shouldPrintMessage(timestamp,message);
 */
