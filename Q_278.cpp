// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int a,a1,b1;
        
        a1 = 1;b1 = n;
        while(a1<b1){
            a = a1 + (b1-a1)/2;
            if(isBadVersion(a) == true)
                b1 = a;
            else
                a1 = a + 1;
        }
        return a1;
    }
};
