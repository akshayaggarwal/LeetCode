class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i,posmax,posmin,minnum2=INT_MAX,minnum=INT_MAX;
        int flag=0;
        posmax=0;
        posmin=0;
        for(i=0;i<letters.size();i++){
            if(target-letters[i]==0)
                continue;
            if(letters[i]-target>0)
                flag=1;
            if(letters[i]-target<minnum&&letters[i]-target>0){
                minnum=letters[i]-target;
                posmin = i;
            }
            if(letters[i]-target<minnum2&&letters[i]-target<0){
                minnum2=letters[i]-target;
                posmax = i;
            }
        }
        return flag==0?letters[posmax]:letters[posmin];
    }
};
