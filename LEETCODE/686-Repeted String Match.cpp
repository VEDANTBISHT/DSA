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

/*Explanation:

First, we calculate the minimum number of times a needs to be repeated to make the length of the generated string greater than or equal to the length of b. We can calculate this by dividing the length of b by the length of a and then taking the ceiling of the result.

Next, we generate a string s by repeating a at least k times.

Then, we check if b is a substring of s. If it is, we return k as the minimum number of times a needs to be repeated to obtain b.

If b is not a substring of s, we concatenate a to s and check if b is a substring of the concatenated string. If it is, we return k+1 as the minimum number of times a needs to be repeated to obtain b.

If b is not a substring of either s or the concatenated string, we return -1 as it's impossible to obtain b by repeating a any number of times.

Time Complexity: O(n + m) - where n is the length of a and m is the length of b. We need to repeat a at least ceil(m/n) times and then search for b in the generated string.

Space Complexity: O(n) - we are using a string s to generate the repeated string.

I hope this explanation helps you to understand how to solve the "Repeated String Match" problem on LeetCode using C++.





*/
