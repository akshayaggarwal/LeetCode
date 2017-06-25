class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    int si1 = nums1.size();
        int si2 = nums2.size();
        
        int count,a,flag,i,j,total = si1+si2;
        
        double r;
        
        if(total%2 == 0)
            flag = 1;
        else
            flag = 0;
            
        if(si1 == 0){
            if(flag == 1){
                return ((double)(nums2[nums2.size()/2]+nums2[(nums2.size()/2) - 1]))/2;
            }
            else{
                return nums2[nums2.size()/2];
            }
        }
        else if(si2 == 0){
        
            if(flag == 1){
                return ((double)(nums1[nums1.size()/2]+nums1[nums1.size()/2 - 1]))/2;
            }
            else{
                return nums1[nums1.size()/2];
            }
        }
     
        count = 0;
        
        for(i=0,j=0;i<nums1.size()&&j<nums2.size();){

            if(nums1[i] > nums2[j]){
                a = nums2[j];
                j++;
            }
            else{
                a = nums1[i];
                i++;
            }
            
            if(flag == 1){
                if(count + 1 == total/2){
                    r = (double)a;
                    printf("r is %f \n",r);
                }
                else if(count == total/2)
                    return (r+(double)a)/2;
            }
            
            else{
                if(count == total/2)
                    return a;
            }
            
            count++;
                
            }

            while(i<nums1.size()){
            
                a = nums1[i];
                i++;
            
            
            if(flag == 1){
                if(count + 1 == total/2){
                    r = (double)a;
                }
                else if(count == total/2)
                    return (r+(double)a)/2;
            }
            
            else{
                if(count == total/2)
                    return a;
            }
            count++;
            }
  
            while(j<nums2.size()){
                a = nums2[j];
                j++;
            if(flag == 1){
                if(count + 1 == total/2){
                    r = (double)a;

                }
            else if(count == total/2){
                    r = r + a;
                    return (r)/2;
                }
            }
            else{
                if(count == total/2)
                    return a;
            }
            
            count++;
        }    
        
    }
};
