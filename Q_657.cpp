class Solution {
public:
    bool judgeCircle(string moves) {
        
        int i,ver=0,hor=0;
        
        for(i=0;i<moves.size();i++){
            switch(moves[i]){
                case 'U':{
                    ver++;
                    break;
                }
                case 'D':{
                    ver--;
                    break;
                }
                case 'L':{
                    hor--;
                    break;
                }
                case 'R':{
                    hor++;
                    break;
                }
            }
        }
        if(ver==0 && hor==0)
            return true;
        else
            return false;
        
    }
};
