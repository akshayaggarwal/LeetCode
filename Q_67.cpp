class Solution {
public:
    string addBinary(string a, string b) {
        if(b.size() == 0)
            return a;
        else if(a.size() == 0)
            return b;
        string str = "";
        int car = 0,tar,i,j;
        for(i=a.size()-1,j=b.size()-1;i>=0&&j>=0;i--,j--){
                tar = car + (a[i]-48) + (b[j]-48);
                if(tar == 0){
                    str = '0' + str;
                    car = 0;
                }
                else if(tar == 1){
                    str = '1' + str;
                    car = 0;
                }
                else if(tar == 2){
                    str = '0' + str;
                    car = 1;
                }
                else{
                    str = '1' + str;
                    car = 1;
                }
        }
        while(i>=0){
                tar = car + (a[i]-48);
                if(tar == 0){
                    str = '0' + str;
                    car = 0;
                }
                else if(tar == 1){
                    str = '1' + str;
                    car = 0;
                }
                else{
                    str = '0' + str;
                    car = 1;
                }
            i--;
        }
        while(j>=0){
                tar = car + (b[j]-48);
                if(tar == 0){
                    str = '0' + str;
                    car = 0;
                }
                else if(tar == 1){
                    str = '1' + str;
                    car = 0;
                }
                else{
                    str = '0' + str;
                    car = 1;
                }
            j--;
        }
        
        if(car == 1)
            str = '1' + str;
        return str;
    }
};  
