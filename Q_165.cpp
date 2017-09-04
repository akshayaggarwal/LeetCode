class Solution {
public:
    int compareVersion(string version1, string version2) {
        double num1,num1b,num2,num2b;
        int i,j;
        
        //num2b = num1b = 0;
       i = j = 0;
        while(i<version1.size() && j<version2.size()){
        
            num1 = num2 = 0;
            
            
            for(;i<version1.size()&&version1[i]!='.';i++){
                    num1 = num1*10 + (version1[i]-'0');
            }
       
            for(;j<version2.size()&&version2[j]!='.';j++){
                    num2 = num2*10 + (double)(version2[j]-'0');
            }
        
            if(num1>num2)
                return 1;
            else if(num1<num2)
                return -1;
            
            i++;
            j++;
        }
    
        if(i >= version1.size() && j>=version2.size())
            return 0;
        else if(i < version1.size()){
          while(i<version1.size()){
            num1 = 0;
            for(;i<version1.size()&&version1[i]!='.';i++){
                    num1 = num1*10 + (version1[i]-'0');
            }
              if(num1>0)
                  return 1;
            i++;
          }
            return 0;
        }
        else{
            while(j<version2.size()){
            num2 = 0;
            for(;j<version2.size()&&version2[j]!='.';j++){
                    num2 = num2*10 + (version2[j]-'0');
            }
              if(num2>0)
                  return -1;
            j++;
            }
            return 0;
        }
        //return 0;
    }
};
