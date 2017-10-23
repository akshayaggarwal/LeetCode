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
        vector<Interval> ret;
        if(intervals.size()==0)
            return ret;
        sort(intervals.begin(),intervals.end(),mysort());
        int i;
        ret.push_back(intervals[0]);
        for(i=1;i<intervals.size();i++){
                if(ret.back().end<intervals[i].start)
                    ret.push_back(intervals[i]);
                else
                    ret.back().end = max (ret.back().end,intervals[i].end);
        }
        return ret;
    }
};
