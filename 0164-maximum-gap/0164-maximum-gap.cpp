class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int m = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i< nums.size()-1; i++){
                int n = nums[i+1] - nums[i];
                m = max(m, n);
            }
        return m;
    }
};