
class Solution {
public:
    bool isValid(string s) {
        vector<char> st;

        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push_back(c);
            }
            else if(c == ')' || c == '}' || c == ']') {
                if(st.empty()) {
                    return false;
                }

                char t = st.back();

                if((c == ')' && t == '(') ||
                   (c == '}' && t == '{') ||
                   (c == ']' && t == '[')) {
                    st.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
