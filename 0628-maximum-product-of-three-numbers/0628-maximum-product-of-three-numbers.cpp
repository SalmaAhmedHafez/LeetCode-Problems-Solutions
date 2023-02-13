class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        int ans = nums[0]*nums[1]*nums[2];
        if(nums[n-1] * nums[n-2] > nums[1] * nums[2] && nums[0] > 0)
            ans = nums[0] * nums[n-1] * nums[n-2];
        return ans;
    }
};