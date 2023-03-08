class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.size(), m = b.size();
        int k = ceil((double)m / n); // minimum number of times to repeat a
        
        string s = "";
        for(int i=0; i<k; i++)
            s += a;
        
        if(s.find(b) != string::npos) // if b is a substring of s
            return k;
        else if((s + a).find(b) != string::npos) // if b is a substring of s + a
            return k+1;
        else
            return -1;
    }
};
