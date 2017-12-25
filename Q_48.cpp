class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,st,en,temp;
        st=0;
        en=matrix.size()-1;
        int lt=en;
        while(st<en){
            for(i=st;i<en;i++){
                temp=matrix[st][i];
                matrix[st][i]=matrix[lt-i][st];
                matrix[lt-i][st]=matrix[en][lt-i];
                matrix[en][lt-i]=matrix[i][en];
                matrix[i][en]=temp;
            }
            st++;en--;
        }
    }
};
