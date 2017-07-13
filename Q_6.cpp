class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows <= 1)
            return s;

        vector <string> str(numRows,"");
        string ret = "";
        int i,row,step;
        
        row = 0;
        
        int len = s.size();
        
        for(i=0;i<len;i++)
        {

            str[row].push_back(s[i]);
            
            if(row == 0)
                step = 1;
            else if(row == numRows-1)
                step = -1;
            
            row+=step;
        }
        
        for(i=0;i<numRows;i++){
            ret = ret + (str[i]);
        }

        return ret;

    }
};
