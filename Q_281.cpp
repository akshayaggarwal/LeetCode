class ZigzagIterator {
public:

    vector<int> vec1,vec2;
    int flag;
    int s1,s2;

    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        
        flag = 0;
        vec1 = v1;
        vec2 = v2;
        s1=s2=0;
    }

    int next() {
        
        int a;
        
        if(flag == 0 && vec1.size()!=0){
            flag = 1;
            a = vec1[0];
            vec1.erase(vec1.begin());
            s1++;
        }
        else{
            flag = 0;
            if(vec2.size()!=0){
                a = vec2[0];
                s2++;
                vec2.erase(vec2.begin());
            }
            else{
                a = vec1[0];
                s1++;
                vec1.erase(vec1.begin());
            }
        }
        return a;
    }

    bool hasNext() {
        return (vec1.size()!=0||vec2.size()!=0);
    }
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */
