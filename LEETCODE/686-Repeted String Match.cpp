class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) // if the length is not equal, return false
            return false;
        
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] == goal[0]){
                int j=0, k=i;
                while(j < n && s[k%n] == goal[j]){
                    j++;
                    k++;
                }
                if(j == n) // if all characters match after some shifts
                    return true;
            }
        }
        return false;
    }
};

/*--------------------------------------Explanation-------------------------------------
First, we check if the length of both strings is equal. If not, we return false as it's impossible to make s equal to goal after any number of shifts.

Next, we iterate through each position of s and check if the character at that position matches with the first character of goal. If it matches, we initialize two variables j and k to 0 and i, respectively. j is used to iterate through each character of goal and k is used to iterate through each character of s after some number of shifts.

Then, we compare each character of s with each character of goal after some number of shifts until either all characters of goal are matched or there is a mismatch.

If all characters of goal are matched after some number of shifts, we return true as s can be made equal to goal by rotating it some number of times.

If we have checked all positions of s and still not able to make it equal to goal after any number of shifts, we return false.

Time Complexity: O(n^2) - where n is the length of the string s. In the worst case, we need to compare each character of s with each character of goal after some number of shifts.

Space Complexity: O(1) - we are not using any extra space



*/