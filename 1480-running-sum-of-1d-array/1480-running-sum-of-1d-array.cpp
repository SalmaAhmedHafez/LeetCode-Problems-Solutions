class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans = 0;
        vector <int> res(nums.size());
        for (int i = 0; i < nums.size(); i++){
            ans += nums[i];
            res[i] = ans;
        }
        return res;   
    }
};