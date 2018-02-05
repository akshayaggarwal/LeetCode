class Solution {
public:
    int custompow(int a, int num){
        a=a%1337;
        int res=1,i;
        while(num>0){
            res = res * a;
            res = res%1337;
            num--;
        }
        return res%1337;
    }
    
    int superPow(int a, vector<int>& b) {
        if(b.size()==0)
            return 1;
        int i,res=1,num=0;
        num=b.back();
        b.pop_back();
        return custompow(superPow(a,b),10)*custompow(a,num)%1337;
    }
};
