class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
     
        int i,j,count;
        vector<pair<int,int>> one,zero;
        
        pair<int,int> x;
        
        for(i=0;i<board.size();i++){
            
            for(j=0;j<board[0].size();j++){
            count = 0;
                
                x.first = i;
                x.second = j;
        
                if(i-1>=0){
                
                    if(board[i-1][j] == 1)
                           count++;
                    
                    if(j-1>=0){
                    
                        if(board[i-1][j-1] == 1)
                           count++;
                    }
                    
                    if(j+1<board[0].size()){
                      
                    if(board[i-1][j+1] == 1)
                           count++;
                    }
                    
                }

                if(i+1<board.size()){
            
                    if(board[i+1][j] == 1)
                           count++;
                    
                    if(j-1>=0){
              
                    if(board[i+1][j-1] == 1)
                           count++;
                    }
                    
                    if(j+1<board[0].size()){
                
                    if(board[i+1][j+1] == 1)
                           count++;
                    }
                
                }
                
                if(j-1>=0){
                    if(board[i][j-1] == 1)
                           count++;
                }

                if(j+1<board[0].size()){
                    if(board[i][j+1] == 1)
                           count++;
                }
                
                
                if(board[i][j] == 1){
                    if(count<2 || count>3)
                      
                        zero.push_back(x);
                }
                else if(board[i][j] == 0 && count == 3){
                    
                    one.push_back(x);
            }
            }   
        }
             for(i=0;i<one.size();i++){
                x = one[i];
                board[x.first][x.second] = 1;
            }

            for(i=0;i<zero.size();i++){
                x = zero[i];
                board[x.first][x.second] = 0;
            }
        
    }
};
