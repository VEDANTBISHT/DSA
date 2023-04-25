class Solution {
public:
    int climbStairs(int n) {
        // Create an array to store the number of ways to reach each step
        int dp[n+1];
        
        // There is only one way to reach the first step
        dp[0] = 1;
        
        // There are two ways to reach the second step
        dp[1] = 1;
        dp[2] = 2;
        
        // For each step from the third step to the nth step,
        // the number of ways to reach that step is equal to the sum of
        // the number of ways to reach the previous two steps.
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        // The total number of ways to reach the nth step is stored in dp[n]
        return dp[n];
    }
};


/*solution 2 without runtime error
*/
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            // There are only two ways to reach the first two steps
            return n;
        }
        
        // Initialize variables for the first and second steps
        int prev1 = 1, prev2 = 2;
        
        // For each step from the third step to the nth step,
        // calculate the number of ways to reach that step by adding the
        // number of ways to reach the previous two steps
        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            
            // Update variables for the previous two steps
            prev1 = prev2;
            prev2 = curr;
        }
        
        // The total number of ways to reach the nth step is stored in prev2
        return prev2;
    }
};
