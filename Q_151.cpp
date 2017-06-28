class Solution {
public:
    void reverseWords(string &s) {
     
     int i,j;
     string str = "";
     
     i = 0;
     
      while(i<s.size() && s[i] == ' ')
        i++;
      
      j = s.size()-1;
      
      while(j>=0 && s[j] == ' ')
        j--;
        
      if(j<i){
        s = str;
        return;
      }
      
      j++;
      s = s.substr(i,j-i);
      i = 0;

      for(j=s.size()-1;i<j;i++,j--){
         
         swap(s[i],s[j]);
         
      }
     

      i = 0;
      
      j = 0;
     
      for(i=0;i<=s.size();i++){
     
        if(i == s.size()){
            if(j == i-1)
                break;
            reverse(s.begin()+j,s.begin()+i);
            break;
        }
     
        else if(s[i] == ' '){
     
            reverse(s.begin()+j,s.begin()+i);
        
            while(i<s.size() && s[i]==' ')
                i++;
            j = i;
        }
        

     }
 
     for(i=0;i<=s.size();i++){
     
     if(s[i] == ' '){

        j = ++i;
        
        while(i<s.size() && s[i]==' ')
                i++;
        s.erase(j,i-j);
        
        i = j-1;
        }
         
    }

    }
};
