class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector <int> ans(0);
        int tmp = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 1) tmp++;
            else tmp = 0;
            ans.push_back(tmp);
        }
        return *max_element(ans.begin(), ans.end());
    }
};