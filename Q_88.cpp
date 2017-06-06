class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i,j,a,k;
        j = 0;

        vector<int>::iterator it = nums1.begin();
        
        k = m;

        for(i=0;i<n && j<k;)
        {
            if(nums2[i]<=nums1[j]){
                nums1.insert(nums1.begin()+j,nums2[i]);
                i++;
                k++;
            }
            j++;
        }

        if(i<n)
        {
            while(i<n)
            {
                nums1.insert(nums1.begin()+j,nums2[i]);
                it++;
                i++;
                j++;
            }
        }
        nums1.erase(nums1.begin()+m+n,nums1.end());
    }
};
