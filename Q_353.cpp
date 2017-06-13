class SnakeGame {
public:
    /** Initialize your data structure here.
        @param width - screen width
        @param height - screen height 
        @param food - A list of food positions
        E.g food = [[1,1], [1,0]] means the first food is positioned at [1,1], the second is at [1,0]. */
        
        int wid,ht,snake_si;
        vector<pair<int,int>> cur;
        pair<int,int> head;
        vector<pair<int, int>> fd;
        int cur_food;
        
    SnakeGame(int width, int height, vector<pair<int, int>> food) {
        
        wid = width;
        ht = height;
        
        //pair<int,int> st;
        
        head.first = 0;
        head.second = 0;
        
        ///cur.insert(cur_pos.begin(),st);
        
        fd = food;
        cur_food = 0;
    }
    
    /** Moves the snake.
        @param direction - 'U' = Up, 'L' = Left, 'R' = Right, 'D' = Down 
        @return The game's score after the move. Return -1 if game over. 
        Game over when snake crosses the screen boundary or bites its body. */
    int move(string direction) {
        
        //pair<int,int> curpos;
        pair<int,int> cur_old;
        
     //   ###################################################################################
        //cur_pos = cur[cur_food];
        cur_old = head;
        
        int a,b,flag,i,j;
        
        //cur.erase(cur.end()-1);
        
        if(head.first == 0 && direction == "U")
            return -1;
        else if(head.first == ht-1 && direction == "D")
            return -1;
        else if(head.second == 0 && direction == "L")
            return -1;
        else if(head.second == wid-1 && direction == "R")
            return -1;
            
            if(direction == "L"){
                        head.second--;
                    }
            else if(direction == "R"){
                        head.second++;
                    }
            else if(direction == "D"){
                        head.first++;
                    }
            else if(direction == "U"){
                        head.first--;
                    }
      
            
            flag = 0;

            if(cur_food<fd.size()){
                
                if(fd[cur_food].first == head.first && fd[cur_food].second == head.second){
                    //printf("reached\n");
                    cur.push_back(cur_old);
                    cur_food++;
                    flag = 1;
                }
            }
            
            if(flag == 0){
                //if(cur.size() == 0)
                  //  cur.push_back(cur_old);
                //else{
                    for(j=cur.size()-1;j>=0;j--){
                        a = cur[j].first;
                        b = cur[j].second;
                        
                        cur[j].first = cur_old.first;
                        cur[j].second = cur_old.second;
                        
                        cur_old.first = a;
                        cur_old.second = b;
                    }
                //}
            }
            
    //    ###################################################################################
        
          
             for(j=0;j<cur.size();j++){
                 //printf("here\n");
                if(head == cur[j])
                    return -1;
             }
             
         return cur_food;
    }
};

/**
 * Your SnakeGame object will be instantiated and called as such:
 * SnakeGame obj = new SnakeGame(width, height, food);
 * int param_1 = obj.move(direction);
 */
