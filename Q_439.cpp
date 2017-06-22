class Solution {
public:
    string parseTernary(string expression) {
        
        printf("reached\n");
        
        int i = 0;
        char ch;
        string str;
        int count;
        
            
            ch = expression[i];
            
            if(ch == 'T'){
                
                if(expression[i+1] != '?')
                    return "T";
                
                while(expression[i]!='?'){
                    if(i==expression.size()-1)
                        return "T";
                    i++;
                }
                
                i++;
                ch = expression[i];
                
                if(ch=='T' || ch=='F')
                    return parseTernary(expression.substr(i,expression.size()-i));
                else{
                    str = ch;
                    return str;
                }
                    
            }
            else if(ch == 'F'){
                
                if(expression[i+1] != '?'){
                  //  printf("i is tt %d \n",i);
                    return "F";
                }
                
                count = 1;
                i+=2;
                while(count !=0){
                    
                    if(expression[i]==':')
                        count--;
                    
                    if(expression[i]=='?')
                        count++;
                            
                    if((i+1)==expression.size()){
                    //    printf("i is hh %d \n",i);
                        return "F";
                    }
                    i++;
                }
                
                //i++;
                
                ch = expression[i];
                
                if(ch=='T' || ch=='F')
                    return parseTernary(expression.substr(i,expression.size()-i));
                else{
                    str = ch;
                    return str;
                }
                    
            }
            
        //}
        
    }
};
