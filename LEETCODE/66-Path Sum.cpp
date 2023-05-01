class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {  // iterate through digits from right to left
            if (digits[i] < 9) {  // if the digit is less than 9, increment it and return the result
                digits[i]++;
                return digits;
            }
            digits[i] = 0;  // if the digit is 9, set it to 0 and continue to the next digit
        }
        digits.insert(digits.begin(), 1);  // if all digits are 9s, add a 1 to the front of the vector
        return digits;
  
  
    }
};

