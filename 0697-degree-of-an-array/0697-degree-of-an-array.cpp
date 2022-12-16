class Solution {
    int max(int a, int b) {
        if(a > b) return a;
        return b;
    }
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, vector<int>> mp;
        int n = nums.size();
        int mx = 0;
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
            mx = max(mx, mp[nums[i]].size());
        }
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(mp[nums[i]].size() == mx) {
                ans = min(ans, mp[nums[i]].back() - mp[nums[i]][0]+1);
            }
        }
        return ans;
    }
};