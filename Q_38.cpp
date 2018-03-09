class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        vector<vector<int>> myvec;
        vector<int> temp,temp2;
        int i,count,a;
        string ret="";
        temp.push_back(1);
        myvec.push_back(temp);
        n--;
        while(n>0){
            temp=myvec[myvec.size()-1];
            count=0;
            temp2.clear();
            for(i=0;i<temp.size();){
                a=temp[i];
                count=0;
                while(i<temp.size()&&temp[i]==a){
                    i++;
                    count++;
                }
                temp2.push_back(count);
                temp2.push_back(a);
            }
            myvec.push_back(temp2);
            n--;
        }
        temp=myvec[myvec.size()-1];
        for(i=0;i<temp.size();i++)
            ret+=temp[i]+48;
        return ret; 
    }
};
