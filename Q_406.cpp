class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        
        vector<pair<int, int>> ret;
        int i;
        
        auto comp = [](pair<int,int> &p1,pair<int,int> &p2){
            return (p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second));
        };
     
        sort(people.begin(),people.end(),comp);
        
        for(i=0;i<people.size();i++){
            ret.insert(ret.begin()+people[i].second,people[i]);    
        }
        
        return ret;
        
    }
};
