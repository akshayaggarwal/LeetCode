class Solution {
public:
    vector<int> ret;
    
    void check_num(int a){
        int temp=a,i;
        if(a==0)
            return;
        while(a>0){
            i = a%10;
            if(i==0)
                break;
            if(temp%i!=0)
                break;
            a=a/10;
        }
        if(a==0)
            ret.push_back(temp);
        
    }
    vector<int> selfDividingNumbers(int left, int right) {
        int i;
        for(i=left;i<=right;i++)
            check_num(i);
        return ret;
    }
};
