class Solution {
public:
    
    vector<string> ret;
    
    vector<string> generateParenthesis(int n) {
        string str = "";
        gen_par(ret,str,n,0);
        
        return ret;
    }
    
    void gen_par(vector<string> &ret,string str,int n,int m){
        
        if(n==0 && m==0){
            ret.push_back(str);
            return;
        }
        
        if(n>0){
            gen_par(ret,str+'(',n-1,m+1);
        }
        
        if(m>0){
            gen_par(ret,str+')',n,m-1);
        }
    }
};
