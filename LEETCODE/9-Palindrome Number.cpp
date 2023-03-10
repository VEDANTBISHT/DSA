class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x); // Step 1: convert integer to string
        int i = 0, j = s.length()-1; // initialize two pointers i and j
        while(i <= j){ // Step 2: traverse through string from beginning and end
            if(s[i] != s[j]){ // Step 3: check if characters match
                return false; // return false if characters don't match
            }
            i++;
            j--;
        }
        return true; // Step 4: return true if all characters match
    }
};

/*------------------------------------------Alternate Solution------------------------------------*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { // negative numbers cannot be palindromes
            return false;
        }
        int original = x;
        int reversed = 0;
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};

/*------------------------------------------------Explanation----------------------------------------

The solution works by first checking if the number is negative. Negative numbers cannot be 
palindromes, so we return false if the number is negative.
Next, we create two variables: original and reversed. We set original equal to the input x so that we can compare it to the reversed version of x later. We set reversed equal to 0, which is the starting point for reversing x.
We then use a while loop to reverse x. Inside the loop, we update reversed by multiplying it by 10 and adding the remainder of x divided by 10. We then update x by dividing it by 10 (which removes the last digit).
Once the loop is finished, we compare original to reversed. If they are equal, then x is a palindrome and we return true. Otherwise, x is not a palindrome and we return false.

*/