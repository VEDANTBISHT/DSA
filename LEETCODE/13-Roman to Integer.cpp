#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            int current_val = roman_map[s[i]];
            if (i + 1 < s.size() && roman_map[s[i+1]] > current_val) {
                total -= current_val;
            } else {
                total += current_val;
            }
        }
        
        return total;
    }
};
