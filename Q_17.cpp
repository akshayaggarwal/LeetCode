class Solution {
public:
    map<int,string> mymap;
    
    vector<string> letterCombinations(string digits) {
        vector<string> ret;
        if(digits.size() == 0){
            printf("here\n");
            return ret;
        }
        mymap[2] = "abc";
        mymap[3] = "def";
        mymap[4] = "ghi";
        mymap[5] = "jkl";
        mymap[6] = "mno";
        mymap[7] = "pqrs";
        mymap[8] = "tuv";
        mymap[9] = "wxyz";
        string str = "";
        int i,j,k;
        string temp;
        ret.push_back("");
        for(i=0;i<digits.size();i++){
            if(digits[i]-48 <2 || digits[i]-48> 9)
                break;
            temp = mymap[digits[i]-48];
            vector<string> myvec;
            for(k=0;k<temp.size();k++){
                for(j=0;j<ret.size();j++){
                    myvec.push_back(ret[j]+temp[k]);
                }
            }
            ret.swap(myvec);
        }
        return ret;
    }
};
