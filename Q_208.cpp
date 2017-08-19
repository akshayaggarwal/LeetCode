class Trie {
public:
    /** Initialize your data structure here. */
    
    map<char,Trie*> mymap;
    bool endofword;
    
    Trie() {
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
       // cout<<word<<endl;
        if(word.size()<1)
            return;
        
        if(mymap.find(word[0]) != mymap.end()){
            if(word.size() == 1){
                mymap[word[0]]->endofword = true;
                return;
            }
            else{
                mymap[word[0]]->insert(word.substr(1,word.size()-1));
            }
                
        }
        else{
        //    printf("reached\n");
             mymap[word[0]] = new Trie();
            //mymap[word[0]] = node;
            if(word.size() == 1)
                mymap[word[0]]->endofword = true;
            else{
                mymap[word[0]]->endofword = false;
                mymap[word[0]]->insert(word.substr(1,word.size()-1));
            }
        }
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        if(word.size()<1)
            return true;
        
        if(mymap.find(word[0]) == mymap.end())
            return false;    
        
        if(word.size()==1)
            return mymap[word[0]]->endofword;
        
        return mymap[word[0]]->search(word.substr(1,word.size()-1));
            
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        if(prefix.size()<1)
            return true;
        
        if(mymap.find(prefix[0]) == mymap.end())
            return false;    
        
        if(prefix.size()==1)
            return true;
        
        return mymap[prefix[0]]->startsWith(prefix.substr(1,prefix.size()-1));
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */
