class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mymap;
        mymap['I']=1;
        mymap['V']=5;
        mymap['X']=10;
        mymap['L']=50;
        mymap['C']=100;
        mymap['D']=500;
        mymap['M']=1000;
        int i,ret=0;
        for(i=0;i<s.size();i++){
            if(i+1<s.size()){
                if(s[i]=='I'&&s[i+1]=='V'){
                    ret+=4;
                    i++;
                    continue;
                }
                if(s[i]=='I'&&s[i+1]=='X'){
                    ret+=9;
                    i++;
                    continue;
                }
                if(s[i]=='X'&&s[i+1]=='L'){
                    ret+=40;
                    i++;
                    continue;
                }
                if(s[i]=='X'&&s[i+1]=='C'){
                    ret+=90;
                    i++;
                    continue;
                }
                if(s[i]=='C'&&s[i+1]=='D'){
                    ret+=400;
                    i++;
                    continue;
                }
                if(s[i]=='C'&&s[i+1]=='M'){
                    ret+=900;
                    i++;
                    continue;
                }
            }
            ret+=mymap[s[i]];
        }
        return ret;
    }
};
