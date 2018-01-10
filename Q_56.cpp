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
    vector<Interval> merge(vector<Interval>& intervals) {
        map<int,int> mymap;
        vector<Interval> ret;
        int i,a,b;
        
        for(i=0;i<intervals.size();i++){
            a=intervals[i].start;
            b=intervals[i].end;
            if(mymap.find(a)!=mymap.end())
                mymap[a]=mymap[a]>b?mymap[a]:b;
            else
                mymap[a]=b;
        }
        
        map<int,int>::iterator it1,it2;
        it1=mymap.begin();
        b=0;
        
        while(it1!=mymap.end()){
            it2=it1;
            a=it1->second;
            while(it2!=mymap.end()&&it2->first<=a){
                if(it2->second>a)
                    a=it2->second;
                it2++;
            }
            ret.push_back(Interval(it1->first,a));
            it1=it2;
        }
        return ret;
    }
};
