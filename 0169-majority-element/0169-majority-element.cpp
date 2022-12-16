class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), tmp = 1, ans = nums[0];
        for (int i = n-1; i > 0; i--){
            if (nums[i] == nums[i-1]){
                tmp++;
                if(tmp > n/2){
                    ans = nums[i];
                    break;
                }
            }
            else {
                tmp = 1;
            }
        }
        return ans;
    }
};