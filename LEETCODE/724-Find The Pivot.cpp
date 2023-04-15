class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];s
        }
        return -1;
    }
};
/*----------------------------------Explanation-------------------------------------
To solve this problem, we need to calculate the total sum of the array first. Then, we can iterate through the array and calculate the left sum and right sum at each index. If the left sum and right sum are equal, then we have found the pivot index.

Here's the C++ code to solve the problem:


In this code, we first calculate the total sum of the array in a variable called totalSum. Then, we loop through the array and calculate the left sum at each index in a variable called leftSum. At each index, we check if the left sum is equal to the right sum (which is totalSum - leftSum - nums[i]). If we find an index where the left sum is equal to the right sum, we return that index. If we reach the end of the loop and haven't found a pivot index, we return -1 to indicate that there is no such index.