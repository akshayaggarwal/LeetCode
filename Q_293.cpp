class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
     
     vector<string> ret;
     string str= "";
     
     int i;
     
     if(s.size()<2) 
        return ret;
        
     for(i=0;i<s.size()-1;i++){
         //str = "";
         if(s[i] == '+' && s[i+1] == '+'){
             
             str = s.substr(0,i);
             //cout<<"str is "<<str<<endl;
             str = str + "--";
             str += s.substr(i+2,s.size()-(i+2));
             
             ret.push_back(str);
             //i++;   
             
         }
         
     }
     
     return ret;
        
    }
};
