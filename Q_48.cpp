class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int top,bottom,left,right;
        int start = 0;
        int end = matrix.size();
        int i,j,k;
        
        while(start<end){
            k = 0;
            for(j=start;j<end-1;j++,k++){
                
                top = matrix[start][j];
                right = matrix[j][end-1];
                bottom = matrix[end-1][end-k-1];
                left = matrix[end-k-1][start];

                matrix[start][j] = left;
                matrix[j][end-1] = top;
                matrix[end-1][end-k-1] = right;
                matrix[end-k-1][start] = bottom;
            
            }

            start++;
            end--;
        }
        
    }
};
