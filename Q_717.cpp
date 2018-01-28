class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i,n=bits.size();
        if(n<=2)
            if(bits[0]==1)
                return false;
        for(i=0;i<n-1;){
            if(bits[i]==1)
                i+=2;
            else
                i++;
        }
        if(i==n)
            return false;
        return true;
    }
};
