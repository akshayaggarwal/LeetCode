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
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval> ret;
        int i,j,flag=0;
        for(i=0;i<intervals.size();){
            if(intervals[i].end>=newInterval.start){
                if(newInterval.end<intervals[i].start){
                    ret.push_back(newInterval);
                    ret.push_back(intervals[i]);
                    i++;
                    flag=1;
                }
                else{
                    intervals[i].start=min(intervals[i].start,newInterval.start);
                    intervals[i].end=max(intervals[i].end,newInterval.end);
                    flag=1;
                    j=i++;
                    while(i<intervals.size()&&intervals[i].start<=intervals[j].end){
                        intervals[j].end=max(intervals[i].end,intervals[j].end);
                        i++;
                    }
                    ret.push_back(intervals[j]);
                }
                break;
            }
            else
                ret.push_back(intervals[i++]);
        }
        while(i<intervals.size())
            ret.push_back(intervals[i++]);
        if(flag==0)
            ret.push_back(newInterval);
        return ret;
    }
};
