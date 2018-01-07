class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> mymap;
        vector<string> myvec;
        vector<string> ret1,ret2;
        string str,temp;
        int i,j,k;
        
        if(digits.size()==0)
            return ret1;
        mymap['2']="abc";
        mymap['3']="def";
        mymap['4']="ghi";
        mymap['5']="jkl";
        mymap['6']="mno";
        mymap['7']="pqrs";
        mymap['8']="tuv";
        mymap['9']="wxyz";
        ret1.push_back("");
        for(i=0;i<digits.size();i++){
            str=mymap[digits[i]];
            ret2.clear();
            for(j=0;j<str.size();j++){
                for(k=0;k<ret1.size();k++){
                    temp=ret1[k]+str[j];
                    ret2.push_back(temp);
                }
            }
            ret1=ret2;
        }
        return ret1;
    }
};
