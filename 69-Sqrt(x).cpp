class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int left = 1, right = x;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid <= x / mid && (mid + 1) > x / (mid + 1)) {
                return mid;
            } else if (mid > x / mid) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return right;
    }
};

/*--------------------------------------------------explanation--------------------------------------------

First, we set the range of possible square roots. Since the square root of x cannot be larger than x itself, we start with a left pointer at 0 and a right pointer at x.

Next, we enter a while loop that runs as long as the left pointer is less than or equal to the right pointer.

Inside the while loop, we calculate the mid-point between the left and right pointers using integer division. This will give us a candidate for the square root of x.

We then check if the candidate is a valid square root by squaring it and comparing it to x. If the candidate is too small, we move the left pointer to mid + 1. If the candidate is too large, we move the right pointer to mid - 1.

If the candidate is a valid square root, we return it.

If we exit the while loop without finding a valid square root, we return the right pointer as the closest approximation.---------*/





