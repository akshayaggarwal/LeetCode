class Solution {
public:
    string countAndSay(int n) {
        vector<int> myvec,temp;
        string str="";
        if(n<1)
            return str;
        int i,count,num;
        myvec.push_back(1);
        while(n>1){
            temp.clear();
            for(i=0;i<myvec.size();){
                num=myvec[i];
                count=0;
                while(i<myvec.size()&&myvec[i]==num){
                    count++;
                    i++;
                }
                temp.push_back(count);
                temp.push_back(num);
            }
            n--;
            myvec=temp;
        }
        for(i=0;i<myvec.size();i++)
            str+=myvec[i]+48;
        return str;
    }
};
