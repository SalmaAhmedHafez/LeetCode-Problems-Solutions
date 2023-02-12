class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = n;
        if (n & 1)
            ans = 2*n;
        return ans;
    }
};