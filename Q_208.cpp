class Trie {
public:
    /** Initialize your data structure here. */
    
    map<char,Trie*> mymap;
    bool endofword;
    
    Trie() {
        endofword = false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {

        if(word.size() == 0)
            return;

        int i,j;
        Trie *mynode;
        
            if(mymap.find(word[0]) == mymap.end()){
                
                mynode = new Trie();
                
                if(word.size()==1)
                    mynode->endofword = true;
                else
                    mynode->endofword = false;
                
                mymap[word[i]] = (mynode);
                
            }
            else
            {
                if(word.size()==1)
                {
                    mymap[word[0]]->endofword = true;   
                }
                mynode = mymap[word[i]];
            }
            mynode->insert(word.substr(1,word.size()-1));

    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {

        int i,j;
        
        if(word.size() == 0)
            return true;
        
        if(mymap.find(word[0]) == mymap.end()){
            return false;
        }
        else{
            
            if(word.size()==1){
                if(mymap[word[0]]->endofword == true){
                return true;
                }
                else
                    return false;
            
            }
                return mymap[word[i]]->search(word.substr(1,word.size()-1));
            }    
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         
        string word = prefix;
        int i;
        
        if(word.size() == 0)
            return true;
        
            if(mymap.find(word[0]) == mymap.end()){
                return false;
            }
            return mymap[word[0]]->startsWith(prefix.substr(1,prefix.size()-1));

    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */
