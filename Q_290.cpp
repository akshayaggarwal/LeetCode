class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        std::map<char,string> mymap;
        std::set<string> myset;
        
        pair<set<string>::iterator,bool> ret;
        string str2 = "";
        
        int j = 0;
        int i;
    
        while(j<str.size() && str[j] == ' ')
            j++;
            
        for(i=0;i<pattern.size();i++)
        {
            if(j==str.size())
                break;
            str2 = "";
            if(mymap.find(pattern[i]) != mymap.end())
            {
        //        printf("j is %d\n",j);
         //       printf("str.siz() is %d \n",str.size());
                
                while(j<str.size() && str[j] != ' '){
           //         printf("j is %d\n",j);
                    str2 = str2+str[j];
             //       printf("str[j] is %c\n",str[j]);
                    j++;
                    
                }
               
               //cout<<"1. str is "<<str2<<endl;
               
                if(str2 != mymap[pattern[i]])
                    return false;
                    
                while(j<str.size() && str[j] == ' ')
                    j++;    
            }
            else
            {
                while(j<str.size() && str[j] != ' '){
                    str2 = str2+str[j];
                    j++;
                }
                
                ret = myset.insert(str2);
                
                if(ret.second == false)
                    return false;
                
                //cout<<"2. str is "<<str2<<endl; 
                mymap[pattern[i]] = str2;
               // myset.push_back(str2);
                
                while(j<str.size() && str[j] == ' ')
                    j++;
            }
        }
        if(j<str.size() || i<pattern.size())
            return false;
        
        return true;
    }
};
