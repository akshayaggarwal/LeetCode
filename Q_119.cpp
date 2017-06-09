class Solution {
public:

    int fac(double n,double k){
   
        double a = 1;
        double b = 1;
        double c = n-k;
        c++;
        
        while(n>=c){
            a = a*n;
            n--;
        }
        
        while(k>0){
            b = b*k;
            k--;
        }
        
        a =  a/b;
        //printf("returning %f\n",a);
        //printf("returning %d\n",(int)(a+0.1));
        return (int)(a+0.1);
    }

    vector<int> getRow(int rowIndex) {
        
        int i,k;
        vector<int> ret;
        
        for(i=0;i<=rowIndex;i++){
            if(i>rowIndex/2)
                k = rowIndex - i;
            else
                k = i;
            ret.push_back(fac(rowIndex,k));
        }
        return ret;
    }
};
