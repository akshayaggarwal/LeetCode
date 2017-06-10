class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        

        vector<int> vec;

        if(matrix.size() == 0)
            return vec;
            
        int i1,i2;
        int j = matrix.size();
        int k = matrix[0].size();
    
        i1 = 0;
        i2 = 0;
        
        int start_row = 0;
        int start_col = 0;
        
        while(true){
            
            
            for(i1=start_col;i1<k;i1++){
                vec.push_back(matrix[start_row][i1]);
            }

            i2 = start_row+1;
            
            for(;i2<j;i2++){
                vec.push_back(matrix[i2][k-1]);
            }
            
            if((j-start_row)>1){    
            for(i1=i1-2;i1>=start_col;i1--){
                vec.push_back(matrix[j-1][i1]);
            }
            }
            
            if((k-start_col)>1){    
            for(i2=i2-2;i2>start_row;i2--){
                vec.push_back(matrix[i2][start_col]);
            }
            }
               
            start_row++;
            start_col++;
        
            j--;
            k--;
                
            if(start_row >= j)
                break;
            
            if(start_col >= k)
                break;
            
    
        }
        
        return vec;
        
    }
};
