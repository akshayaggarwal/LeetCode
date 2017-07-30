class ValidWordAbbr {
public:
    
    map<string,vector<string>> mymap;
    
    ValidWordAbbr(vector<string> dictionary) {
        
        string str,temp;
        int i,j;
        
        for(i=0;i<dictionary.size();i++){
            str = dictionary[i];
            
            temp = "";
            
            if(str.size()>0){
                temp = temp + str[0];
            
                for(j=1;j<str.size()-1;j++);
            }
            if(str.size()>2)
                temp += to_string(str.size()-2);

            if(str.size()>=2)
                temp += str[str.size()-1];
            
            if(temp == "a1h"){
                printf("what\n");
                cout<<str<<endl;
            }
            
            if(mymap.find(temp)!=mymap.end()){
                if(find(mymap[temp].begin(),mymap[temp].end(),str) != mymap[temp].end())      //str is already there in vector
                    continue;
            }
            
            mymap[temp].push_back(str);
        }
        
        //printf("size is %d \n",mymap["a1h"].size());
        //cout<<
    }
    
    bool isUnique(string word) {
        
        
        //printf("reached\n");
            string temp = "";
            int j;    
        
            vector<string> vec;
        
            if(word.size()>0)
                temp = temp + word[0];
            else
                return true;
            
            for(j=1;j<word.size()-1;j++);
            
            if(word.size()>2)
                temp += to_string(word.size()-2);

            if(word.size()>=2)
                temp += word[word.size()-1];
    
          //  cout<<temp<<endl;
        
            if(mymap.find(temp)!=mymap.end()){
                vec = mymap[temp];
                if(vec.size()>1)
                    return false;
                else
                    if(vec[0] != word)
                        return false;
            }
        return true;
        
    }
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param_1 = obj.isUnique(word);
 */
