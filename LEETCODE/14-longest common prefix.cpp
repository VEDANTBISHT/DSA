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
