class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> mystack;
        int a,b,ret,i,n=s.size();
        for(i=0;i<n;i++){
            if(s[i]=='(')
                mystack.push(i);
            else{
                if(!mystack.empty()){
                    if(s[mystack.top()]=='(')
                        mystack.pop();
                    else
                        mystack.push(i);
                }
                else
                    mystack.push(i);
            }
        }
        if(mystack.size()==0)
            return n;
        a=n;
        b=0;
        ret=INT_MIN;
        while(mystack.size()!=0){
            printf("here\n");
            b=mystack.top();
            ret=max(ret,a-b-1);
            mystack.pop();
            a=b;
        }
        ret=max(ret,a);
        return ret;
    }
};
