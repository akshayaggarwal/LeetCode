class Solution {
public:
    string toHex(int num) {
        
        double f = INT_MAX ;

        int k;
        
        if(num<0){
            f = f + (f+num) + 2; 
            num = (int)f;
        }
        else
            f = num;
        
        int i;
        map<int,char> mymap;
        string str = "";
        
        for(i=0;i<10;i++)
            mymap[i] = i+48;

        for(i=0;i<6;i++)
            mymap[i+10] = i+97;
        
        while(f>0){
            k = (fmod(f,16));
            str = mymap[k] + str;
            f /= 16;
        }
        
        if(str.size()>8){
            str =  str.substr(str.size()-8,8);
            for(i=0;str[i]=='0';i++);
             if(i==str.size())
                 return "0";
             else
                return str.substr(i);
        }
        else{
         for(i=0;str[i]=='0';i++);
         if(i==str.size())
             return "0";
         else
            return str.substr(i);
        }
    }
};
