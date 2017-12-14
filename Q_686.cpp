class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        // A is string that can repeat
        // B is the string that can be there
        int i,j,k,count;
        for(i=0;i<A.size();i++){
            if(A[i]==B[0]){
                j=0;
                k=i;
                count=1;
                repeat:
                while(k<A.size()&&j<B.size()&&A[k]==B[j]){
                    k++;
                    j++;
                }
                if(k==A.size()&&j<B.size()){
                    count++;
                    k=0;
                    goto repeat;
                }
                else if(j==B.size())
                    return count;
            }
        }
        return -1;   
    }
};
