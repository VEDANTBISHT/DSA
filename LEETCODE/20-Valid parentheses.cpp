class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
/*In this implementation, we use a dictionary to map closing parentheses to their corresponding opening 
parentheses. We also use a special character '#' as a placeholder to avoid the case where the stack is empty 
and we try to pop an element from it.

This solution has a time complexity of O(n), where n is the length of the input string, because we iterate 
through each character in the string exactly once. The space complexity is also O(n), because in the worst case 
we could store all opening parentheses in the stack.*/