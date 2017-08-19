//#define WordDictionary WD

class WordDictionary {
public:
    
     map<char,WordDictionary*> mymap;
     bool endofword;
    
    /** Initialize your data structure here. */
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
         if(word.size()<1)
            return;
        
        if(mymap.find(word[0]) != mymap.end()){
            if(word.size() == 1){
                mymap[word[0]]->endofword = true;
                return;
            }
            else{
                mymap[word[0]]->addWord(word.substr(1,word.size()-1));
            }
                
        }
        else{
        //    printf("reached\n");
             mymap[word[0]] = new WordDictionary();
            //mymap[word[0]] = node;
            if(word.size() == 1)
                mymap[word[0]]->endofword = true;
            else{
                mymap[word[0]]->endofword = false;
                mymap[word[0]]->addWord(word.substr(1,word.size()-1));
            }
        }    
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        //cout<<word<<endl;
        
        if(word[0] == '.' && word.size()==1){
            for(map<char,WordDictionary*>::iterator it = mymap.begin();it!=mymap.end();it++){
                if(it->second->endofword == true)
                    return true;
            }
            return false;
        }
        
        if(word[0] == '.'){
            //bool b = true;
        
            for(map<char,WordDictionary*>::iterator it = mymap.begin();it!=mymap.end();it++){
                if(it->second->search(word.substr(1,word.size()-1)) == true){
                    return true;
                }
            }
            
            return false;
        }
        
        if(mymap.find(word[0]) == mymap.end())
            return false;    
        
        if(word.size()==1)
            return mymap[word[0]]->endofword;
        
        return mymap[word[0]]->search(word.substr(1,word.size()-1));
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */
