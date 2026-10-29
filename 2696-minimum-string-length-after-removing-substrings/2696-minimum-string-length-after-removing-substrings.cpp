#include<stack>
class Solution {
public:
    int minLength(string s) {
        stack<char> u;
        string r;
        for(char c : s){
            if(!u.empty() && 
            ((u.top() == 'A' && c == 'B') ||
            u.top() == 'C' && c == 'D' )){
                u.pop();
                continue;
            }
            u.push(c); 
            
        }
        return u.size();

    }
};