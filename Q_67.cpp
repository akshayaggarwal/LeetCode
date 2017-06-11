class Solution {
public:
    string addBinary(string a, string b) {
        
        int n1 = a.size()-1;
        int n2 = b.size()-1;
        
        string str="";
        
        int m,carry = 0;
        
        while(n1>=0 && n2>=0){
            
            //printf("inside while\n");
            
            m = (a[n1]-48) + (b[n2]-48) + carry;
            
            if(m == 3){
                str = "1"+str;
                carry = 1;
            }
            
            else if(m == 2){
                str = "0"+str;
                carry = 1;
            }
            
            else if(m == 1){
                str = "1"+str;
                carry = 0;
            }
            
            else if(m == 0){
                str = "0"+str;
                carry = 0;
            }
            
           n1--;
           n2--;
        }
        
        while(n1>=0){
            
            //printf("n1 extended val is %d\n",n1);
            
            m = (a[n1]-48) + carry;
            
            if(m == 2){
                str = "0"+str;
                carry = 1;
            }
            
            else if(m == 1){
                str = "1"+str;
                carry = 0;
            }
            
            else if(m == 0){
                str = "0"+str;
                carry = 0;
            }
            
           n1--;
            
        }
        
        while(n2>=0){
            
            
            //printf("n2 extended val is %d\n",n2);
            
            m = (b[n2]-48) + carry;
            
            if(m == 2){
                str = "0"+str;
                carry = 1;
            }
            
            else if(m == 1){
                str = "1"+str;
                carry = 0;
            }
            
            else if(m == 0){
                str = "0"+str;
                carry = 0;
            }
            
           n2--;
            //printf("n2 extended val is %d\n",n2);
            
        }
        
        if(carry != 0)
            str = "1" + str;
        
        return str;
    }
};
