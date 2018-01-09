class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")
            return "0";
        int n1=num1.size();
        int n2=num2.size();
        vector<int> myvec(n1+n2,0);
        int i,j;
        string str="";
        for(i=n1-1;i>=0;i--){
            for(j=n2-1;j>=0;j--)
                myvec[n1+n2-i-j-2]+=(num1[i]-48)*(num2[j]-48);
        }
        
        for(i=0;i<n1+n2-1;i++){
            myvec[i+1]+=myvec[i]/10;
            myvec[i]%=10;
        }
        
        for(i=n2+n1-1;i>=0;i--)
            str=str+char(myvec[i]+48);

        i=0;
        while(i<str.size()&&str[i]=='0')
            i++;
        return str.substr(i,str.size()-i);
    }
};
