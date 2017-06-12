class StringIterator {
public:
vector<pair<char,int>> vec;
 int curpos;
    StringIterator(string compressedString) {
        
        char ch2;
        
        pair<char,int> pa;
        
        int i,j;
        
        curpos = 0;
        
        for(i=0;i<compressedString.size();i+=2){
            
            pa.first = compressedString[i];
            
            j = 0;
            
            while(compressedString[i+1]>='0' && compressedString[i+1]<='9'){
                
                ch2 = compressedString[i+1];
                j = j*10 + (ch2-48);
                i++;
            
            }
            i--;
            
            pa.second = j;
            
            vec.push_back(pa);
            
        }
        
    }
    
    char next() {
        
        int i;
        //pair<char,int> pa;
        
        for(i=0;i<vec.size();i++){

          //  pa = vec[i];
            
            if(vec[i].second>0){
                vec[i].second--;
                return vec[i].first;
            }
            
        }
        
        return ' ';
    }
    
    bool hasNext() {
        //pair<char,int> pa;
        int i;
        
        for(i=0;i<vec.size();i++){
            
            //pa = vec[i];
            if(vec[i].second>0){
                return true;
            }
            
        }
        
        return false;
    }
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator obj = new StringIterator(compressedString);
 * char param_1 = obj.next();
 * bool param_2 = obj.hasNext();
 */
