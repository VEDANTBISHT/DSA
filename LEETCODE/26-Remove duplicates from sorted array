class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int n = nums.size();
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        
        return j + 1;
    }
};



/*First, we check if the input array is empty or not. If it is empty, we return 0, as there are no duplicates to
 remove.

Next, we initialize two pointers: i and j. Here, i will iterate through the array from the second element to 
the last element, and j will keep track of the position where the next unique element should be placed.

For each element, we compare it with the previous element. If the current element is not equal to the previous 
element, it means that we have found a new unique element. We then increment j by 1 and copy the current 
element to the position indicated by j.

Finally, we return the length of the array, which is j+1, as j is 0-indexed.

Overall, the time complexity of this solution is O(n), where n is the size of the input array. 
This is because we only iterate through the array once. The space complexity is O(1), as we are not using any 
extra memory to store the output.*/