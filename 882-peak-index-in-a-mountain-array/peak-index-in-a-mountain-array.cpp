class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int i=0,j=arr.size()-1;
        int mid=i+(j-i)/2;
        while(i<j){
            if(arr[mid]<arr[mid+1]){
                i=mid+1;
            }else{
                j=mid;
            }
            mid=i+(j-i)/2;
        }
        return i;
    }
};