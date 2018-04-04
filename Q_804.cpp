class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> mymap;
        set<string> myset;
        mymap['a']=".-";
        mymap['b']="-...";
        mymap['c']="-.-.";
        mymap['d']="-..";
        mymap['e']=".";
        mymap['f']="..-.";
        mymap['g']="--.";
        mymap['h']="....";
        mymap['i']="..";
        mymap['j']=".---";
        mymap['k']="-.-";
        mymap['l']=".-..";
        mymap['m']="--";
        mymap['n']="-.";
        mymap['o']="---";
        mymap['p']=".--.";
        mymap['q']="--.-";
        mymap['r']=".-.";
        mymap['s']="...";
        mymap['t']="-";
        mymap['u']="..-";
        mymap['v']="...-";
        mymap['w']=".--";
        mymap['x']="-..-";
        mymap['y']="-.--";
        mymap['z']="--..";
        string temp="";
        int i,j;
        for(i=0;i<words.size();i++){
            temp="";
            for(j=0;j<words[i].size();j++)
                temp+=mymap[words[i][j]];                
            myset.insert(temp);
        }
        return myset.size();
    }
};
