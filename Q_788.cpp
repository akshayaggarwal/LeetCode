class Solution {
public:
    int rotatedDigits(int N) {
        map<int,int> mymap; 
        int ch,j,x=0,x2=0,count=0,i,temp1,temp2,num;
        int n1,n2,flag=0;
        vector<char> myvec;
        mymap[0]=0;
        mymap[1]=1;
        mymap[8]=8;
        mymap[2]=5;
        mymap[5]=2;
        mymap[6]=9;
        mymap[9]=6;
        
        for(i=1;i<=N;i++){
            x=i;
            flag=0;
            while(x>0){
                n1=x%10;
                if(mymap.find(n1)==mymap.end())
                    break;
                n2=mymap[n1];
                if(flag==0&&n1!=n2)
                    flag=1;
                x/=10;
            }
            if(x==0 && flag==1)
                count++;
        }
        return count;
    }
};
