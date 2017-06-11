/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        
        map<int,int> mymap;
        int i,j,last;
        
        for(i=0;i<intervals.size();i++){
            if(mymap.find(intervals[i].start) != mymap.end())
                return false;
            else
                mymap[intervals[i].start] = intervals[i].end;
        }
        
        j = 0;
        
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
            if(j==0){
                last = it->second;
                j++;
            }
            else{
                if(last>it->first)
                    return false;
                else{
                    last = it->second;
                    j++;
                }
                
            }
            
        }
        
        return true;
        
    }
};
