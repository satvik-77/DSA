#include<stack>
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> s;
        for(int i : nums){
            long long k = i;
            while(!s.empty() && s.top() == k){
                k = s.top()*2;
                s.pop();
            }
        s.push(k);
        }


        vector<long long> a;
        while(!s.empty()){
            a.push_back(s.top());
            s.pop();
        }
        reverse(a.begin(), a.end());
        return a;
    }
    
};