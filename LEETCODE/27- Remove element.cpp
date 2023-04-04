class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
/*We start by initializing two pointers i and j to 0. We iterate over the array using the fast-runner j, and if nums[j] is not equal 
to val, we assign the value of nums[j] to nums[i] and increment i. This effectively removes all instances of val from the array.

At the end of the iteration, we return the value of i, which is the new length of the array with all instances of val removed.

This solution has a time complexity of O(n), where n is the length of the array, since we iterate over the array only once. The space 
complexity of the solution is O(1), since we only use two pointers and no additional data structures*/