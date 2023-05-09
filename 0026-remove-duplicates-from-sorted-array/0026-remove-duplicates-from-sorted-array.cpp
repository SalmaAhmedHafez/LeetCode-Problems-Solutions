class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), m = n, index = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]){
                m--;
            }
            else {
                nums[index++] = nums[i]; 
            }
        }
        return m;
    }
};