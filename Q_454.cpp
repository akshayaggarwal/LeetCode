class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int,int> mymap;
        int temp,count=0;
        for(auto a:A){
            for(auto b:B){
                mymap[a+b]++;
            }
        }
        for(auto c:C){
            for(auto d:D){
                temp = c+d;
                temp*=-1;
                if(mymap.find(temp)!=mymap.end())
                    count+=mymap[temp];
            }
        }
        return count;
    }
};
