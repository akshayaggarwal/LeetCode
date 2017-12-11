/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    map<int,vector<int>> mymap;
    int ret;
    
    void addval(vector<int> myvec){
        if(myvec.size()==0)
            return;
        int i,j;
        vector<int> newvec;
        for(i=0;i<myvec.size();i++){
            ret+=mymap[myvec[i]][0];
            for(j=1;j<mymap[myvec[i]].size();j++)
                newvec.push_back(mymap[myvec[i]][j]);
        }
        addval(newvec);
        return;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        int i,j;
        ret=0;
        vector<int> myvec;
        myvec.push_back(id);
        for(i=0;i<employees.size();i++){
            mymap[employees[i]->id].push_back(employees[i]->importance);
            for(j=0;j<employees[i]->subordinates.size();j++)
                mymap[employees[i]->id].push_back(employees[i]->subordinates[j]);
        }
        addval(myvec);
        return ret;
    }
};
