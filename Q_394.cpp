class Solution {
public:
    string decodeString(string s) {
             
       vector<char> myvec;
       string str = "";
       int i,j,k,a,pos,rep,flag;
       string ret;
       
       pos = 0;
       rep = 0;
        
       for(i=0;i<s.size();i++){
           if(s[i]>='0' && s[i]<='9'){
               if(flag == 0){
                   pos = i;
                   flag = 1;
                }
               rep = rep*10 + s[i]-48;
              // pos = i;
             //  printf("a is %d \n",a);
           }
           else if(s[i] == '['){
               a = rep;
               myvec.clear();
               str = "";
               rep = 0;
               flag = 0;
           }
           else if(s[i] == ']'){
               for(j=0;j<a;j++){
                   for(k=0;k<myvec.size();k++)
                       str = str + myvec[k];
                
               }
               
               //cout<<"str is "<<str<<endl;
               //ret = ret + str;
               s.erase(pos,i-pos+1);
               s.insert(pos,str);
               str = "";
               rep = 0;               
               i = -1;
               //pos = i + 1;
               flag = 0;
           }
           else
               myvec.push_back(s[i]);
              
       }
        
       return s;
        
    }
};
