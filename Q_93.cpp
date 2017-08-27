class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ret;
        int a,b,c,d,num1,num2,num3,num4;
        string ans;
        for(a=1;a<=3;a++){
            for(b=1;b<=3;b++){
                for(c=1;c<=3;c++){
                    for(d=1;d<=3;d++){
                    if(a+b+c+d == s.size()){
                        
                        num1 = stoi(s.substr(0,a));
                        num2 = stoi(s.substr(a,b));
                        num3 = stoi(s.substr(a+b,c));
                        num4 = stoi(s.substr(a+b+c,d));
                        
                        if((num1>=0 && num1<=255) && (num2>=0 && num2<=255) && (num3>=0 && num3<=255) && (num4>=0 && num4<=255)){
                            ans = (to_string(num1) + '.' + to_string(num2) + '.' + to_string(num3) + '.' + to_string(num4));
                            if(ans.length() == s.length() + 3)
                                ret.push_back(ans);
                        }
                    }
                }
            }
            }
        }
        return ret;
    }
};
