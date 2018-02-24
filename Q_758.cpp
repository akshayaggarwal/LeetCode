class Solution {
public:
    string boldWords(vector<string>& words, string S) {
        set<string> myset;
        int i,j,sec,k;
        string str,one="<b>",two="</b>";
        vector<int> start,ending;
        map<int,int> mymap;
        for(i=0;i<words.size();i++)
            myset.insert(words[i]);
        for(i=0;i<S.size();i++){
            str="";
            str+=S[i];
            if(myset.find(str)!=myset.end())
                mymap[i]=i;
            for(j=i+1;j<S.size();j++){
                str+=S[j];
                if(myset.find(str)!=myset.end())
                    mymap[i]=j;
            }
        }
        if(mymap.size()==0)
            return S;
        
        map<int,int>::iterator it1=mymap.begin();
        map<int,int>::iterator it2=mymap.begin();
        
        it2++;
        start.push_back(it1->first);
        sec=it1->second;
        while(it2!=mymap.end()){
            if(it2->first<=sec+1)
                sec=it2->second>sec?it2->second:sec;
            else{
                ending.push_back(sec+1);
                start.push_back(it2->first);
                sec=it2->second;
            }
            it2++;
        }
        ending.push_back(sec+1);
        for(i=0;i<start.size();i++){
            S.insert(start[i]+(7*i),one);
            S.insert(ending[i]+(7*i)+3,two);
        }
        return S;
    }
};
