
class Solution {
public:
    int pivotele(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {

                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int key) {
        int start = s, end = e, mid = start + (end - start) / 2;

        while (start <= end) {
            mid = start + (end - start) / 2;    
            if(key==nums[mid]) return mid;
            else if (key < nums[mid]) {
                end = mid - 1;

            } else if(key > nums[mid]) {
                start = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivotele(nums);
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};


