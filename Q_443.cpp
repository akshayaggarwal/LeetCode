class Solution {
public:
    int compress(vector<char>& chars) {
        int i,count,j,totcount=0;
        char ch;
        int pos=0;
        for(i=0;i<chars.size();){
            ch = chars[i];
            chars[pos]=ch;
            pos++;
            totcount++;
            count=0;
            j=pos;
            while(i<chars.size()&&chars[i]==ch){
                i++;
                count++;
            }
            if(count==1)
                continue;
            else{
                int num=0;
                int k=0;
                vector<char> numstr;
                while(count>0){
                    numstr.push_back((count%10)+48);
                    count/=10;
                }
                reverse(numstr.begin(),numstr.end());
                while(k<numstr.size()){
                    chars[j]=numstr[k++];
                    totcount++;
                    j++;
                }
                
                pos=j;
            }
        }
        return totcount;
    }
};
