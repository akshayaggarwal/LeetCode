class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     
     
     
        vector<vector<int>> matrix(n, std::vector<int>(n, -1));
     
        if(n == 0)
            return matrix;
        
        int k,j,i1 = 0;
        int i2 = 0;
        
        int start_row = 0;
        int start_col = 0;
        
        j = matrix.size();
        k = matrix[0].size();
        
        int count = 1;
        
        while(true){
            
            
            for(i1=start_col;i1<k;i1++){
                (matrix[start_row][i1]) = count;
                count++;
            }

            i2 = start_row+1;
            
            for(;i2<j;i2++){
                (matrix[i2][k-1]) = count;
                count++;
            }
            
            if((j-start_row)>1){    
            for(i1=i1-2;i1>=start_col;i1--){
                (matrix[j-1][i1]) = count;
                count++;
            }
            }
            
            if((k-start_col)>1){    
            for(i2=i2-2;i2>start_row;i2--){
                (matrix[i2][start_col]) = count;
                count++;
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
        
        return matrix;
        
    }
};
