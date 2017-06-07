class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 1;
        int i=digits.size()-1;
        
        do{
            if(digits[i] == 9){
                digits[i] = 0;
                carry = 1;
            }
            else{
                
                digits[i] = digits[i] + carry;
                carry = 0;
            }
            
            i--;
        }while(i>=0 && carry != 0);
        
        if(i<0 && carry!=0)
            digits.insert(digits.begin(),carry);
            
        return digits;
    }
};
