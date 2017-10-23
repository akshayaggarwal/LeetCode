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
    struct mysort {
        inline bool operator() (const Interval& struct1, const Interval& struct2)
        {
            return (struct1.start < struct2.start);
        }
    };
    
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),mysort());
        int i;
        for(i=1;i<intervals.size();i++){
                if(intervals[i].start<=intervals[i-1].end){
                    intervals[i-1].end = intervals[i-1].end > intervals[i].end ? intervals[i-1].end : intervals[i].end;
                    intervals.erase(intervals.begin() + i);
                    i--;
                }
        }
        return intervals;
    }
};
