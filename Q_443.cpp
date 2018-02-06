class Solution {
public:
    int compress(vector<char>& chars) {
        int cur,i,num,count,n;
        cur=0;
        for(i=0;i<chars.size();){
            chars[cur]=chars[i];
            cur++;
            count=0;
            while(i<chars.size()&&chars[i]==chars[cur-1]){
                count++;
                i++;
            }
            if(count==1)
                continue;
            num=cur;
            while(count>0){    
                chars[cur]=(count%10)+48;
                cur++;
                count/=10;
            }
            reverse(chars.begin()+num,chars.begin()+cur);
        }
        return cur;
    }
};
