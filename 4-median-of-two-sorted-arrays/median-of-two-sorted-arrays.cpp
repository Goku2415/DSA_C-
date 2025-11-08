class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //for Git Hub repo 

        int i = 0 ,j=0;
        int n= nums2.size();
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
        sort(nums1.begin(), nums1.end());
        
        int k = nums1.size() ;
        int s=0, e=k-1,  mid;
        double sum = 0,med;
        
        if(k%2!= 0){
        mid = s+(e-s)/2;
            med = nums1[mid];
        }
        else{
            mid =  s+(e-s)/2;
            sum = nums1[mid] + nums1[++mid];
            med = sum/2;
        }

        return med;
    }
};