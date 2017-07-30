class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        
        string ret = "";
        int i;
        
        for(i=0;i<strs.size();i++){
            ret = ret + to_string(strs[i].size()) + '@' + strs[i];
        }
        
        return ret;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        
        int start,num,pos,len;
        start = 0;
        
        vector<string> ret;
        
        while(start<s.size()){
            pos = s.find_first_of('@', start);
            if(pos == -1)
                break;
            len = stoi(s.substr(start,pos-start));  // second arg in substr in number of arguements
            
            start = pos+1;
            ret.push_back(s.substr(start,len));
            start +=len; 
        }
        
        return ret;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
