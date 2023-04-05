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



/*-----------------------------------------------------------Optimized solution and 
explanation----------------------------------------

We start by initializing two pointers i and n to 0 and the length of the array, respectively. We iterate over the array using the 

slow-runner i, and if nums[i] is equal to val, we copy the value of nums[n - 1] to nums[i] and decrement n. This effectively removes the instance of val from the array.

If nums[i] is not equal to val, we simply increment i.

At the end of the iteration, we return the value of n, which is the new length of the array with all instances of val removed.

This solution has a time complexity of O(n), where n is the length of the array, since we iterate over the array only once. 
The space complexity of the solution is O(1), since we only use two pointers and no additional data structures. The optimized solution 
reduces the number of write operations performed on the input array and is therefore slightly faster than the original solution.-----------------------------------------------------*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n - 1];
                n--;
            } else {
                i++;
            }
        }
        return n;
    }
};
