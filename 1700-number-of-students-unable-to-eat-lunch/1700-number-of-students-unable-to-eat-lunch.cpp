class Solution {
public:
    int countStudents(vector<int>& s1, vector<int>& s2) {
        int count = 0;
        while(!(count==s1.size())){
            if(s1.front()== s2.front()){
                s1.erase(s1.begin());
                s2.erase(s2.begin());
                count = 0;
            }
            else{
                int t1 = s1.front();
                // int t2 = s2.front();
                s1.erase(s1.begin());
                // s2.erase(s2.begin());
                s1.push_back(t1);
                // s2.push_back(t2);
                count++;
            }
        }
        return s1.size();
    }
};