class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            
            if (nums[mid] == target && (mid == 0 || nums[mid-1] < target)) {
                return mid;
            }
            else if (nums[mid] >= target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        
        return -1;
    }
};
/*----------------------------------------Explanation--------------------------------------------------------*/
/*
In this solution, we use a binary search algorithm to find the target element. We maintain two pointers: low, 
which points to the beginning of the array, and high, which points to the end of the array. We then calculate 
the middle index using (low + high) / 2.

We compare the value at the middle index with the target element. 
If they are equal and the element at the previous index is less than the target element or the middle index is 0,
we have found the first occurrence of the target element and we return the index. Otherwise, if the value at the
middle index is greater than or equal to the target element, we narrow our search to the left half of the array
by updating the high pointer. Similarly, if the value at the middle index is less than the target element, 
we narrow our search to the right half of the array by updating the low pointer.

If we cannot find the target element in the array, we return -1.



*/