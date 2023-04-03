class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string lcp = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < strs[i].size() && j < lcp.size() && strs[i][j] == lcp[j]) {
                j++;
            }
            lcp = lcp.substr(0, j);
        }
        return lcp;
    }
};
/*To solve this problem in C++, we can use the following algorithm:

Initialize the longest common prefix (LCP) to the first string in the array.
Iterate through the remaining strings in the array.
For each string, iterate through its characters and compare them with the corresponding characters in the LCP.
If there is a mismatch, update the LCP to be the substring up to the index of the mismatch.
Return the LCP after iterating through all strings.*/