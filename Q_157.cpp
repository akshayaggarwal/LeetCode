// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        
        char *temp = (char*)malloc(sizeof(char)*4);
        
        int k,j,a,i = 0;
        int n2 = n;
        
        while(n>0){
            
            a = read4(buf+i);

            if(n<4)
                {
                    *(buf+n+i) = '\0';
                }
            
            i = i + a;    
            if(a < 4){
                break;
            }
            
            n-=4;
        }
        
        return i;
    }
};
