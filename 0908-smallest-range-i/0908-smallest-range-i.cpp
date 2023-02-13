class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int ans = 0;
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        if (max - min > 2*k)
            ans = max - min - 2*k ;
        return ans;
    }
};