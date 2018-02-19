class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> points;
        int cur,flag;
        int i,j,num,ret=0,k;
        for(i=0;i<ops.size();i++){     
            if(ops[i]=="+"){
                if(points.size()<=1)
                    continue;
                points.push_back(points[points.size()-1]+points[points.size()-2]);        
            }
            else if(ops[i]=="C"){
                if(points.size()==0)
                    continue;
                points.pop_back();            
            }
            else if(ops[i]=="D"){
                if(points.size()==0)
                    continue;
                points.push_back(2*points[points.size()-1]);            
            }
            else{
                num=0;
                j=0;
                flag=0;
                if(ops[i][0]=='-'){
                    flag=1;
                    j=1;
                }
                for(;j<ops[i].size();j++)
                    num=num*10+(ops[i][j]-'0');
                if(flag==1)
                    num*=-1;
                points.push_back(num);            
            }
        }
        for(i=0;i<points.size();i++)
            ret+=points[i];
        return ret;
    }
};
