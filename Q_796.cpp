class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.size()!=B.size())
            return false;
        int j,i,k;
        for(j=0;j<B.size();j++){
            if(B[j]==A[0]){
                k=j;
                for(i=0;i<A.size();i++){
                    if(A[i]!=B[k])
                        break;
                    if(k==A.size()-1)
                        k=0;
                    else
                        k++;
                }
                if(i==A.size())
                    return true;
            }
        }
        return false;
    }
};
