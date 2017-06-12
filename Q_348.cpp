class TicTacToe {
public:

    vector<vector<char>> arr;
    int si;
    
    /** Initialize your data structure here. */
    TicTacToe(int n) {
        
        si = n;
        vector<char> vec;
        int i,j;
        for(j=0;j<n;j++){
        for(i=0;i<n;i++)
            vec.push_back('a');
        arr.push_back(vec);
        }
        
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        
        int i,j;
        
        if(player == 1){
            arr[row][col] = 'X';
            
            if(row + col == arr.size()-1 || row==col)
            {
            for(i=0;i<arr.size();i++){
                if(arr[i][i]!='X')
                    break;
            }
            
            if(i == arr.size())
                return 1;    
                
            for(i=0,j=arr.size()-1;i<arr.size();i++,j--){
                if(arr[i][j]!='X')
                    break;
            }
            
            if(i == arr.size())
                return 1;        
            }
             
            for(i=0;i<arr.size();i++){
                if(arr[i][col]!='X')
                    break;
            }
            
            if(i == arr.size())
                return 1;
            
            for(i=0;i<arr.size();i++){
                if(arr[row][i]!='X')
                    break;
            }
            
            if(i == arr.size())
                return 1;    
            
                
                
        }
        else if(player == 2){
            arr[row][col] = 'O';
        
            if(row + col == arr.size()-1 || row==col)
            {
            for(i=0;i<arr.size();i++){
                if(arr[i][i]!='O')
                    break;
            }
            
            if(i == arr.size())
                return 2;   
                
            for(i=0,j=arr.size()-1;i<arr.size();i++,j--){
                if(arr[i][j]!='O')
                    break;
            }
            
            if(i == arr.size())
                return 2;         
            }
             
            for(i=0;i<arr.size();i++){
                if(arr[i][col]!='O')
                    break;
            }
            
            if(i == arr.size())
                return 2;
            
            for(i=0;i<arr.size();i++){
                if(arr[row][i]!='O')
                    break;
            }
            
            if(i == arr.size())
                return 2;    
            
        }
            
            return 0;
        
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe obj = new TicTacToe(n);
 * int param_1 = obj.move(row,col,player);
 */
