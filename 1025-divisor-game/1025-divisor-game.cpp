class Solution {
public:
    bool divisorGame(int n) {
        bool ans = true;
        if(n & 1)
            ans = false;
        return ans;
    }
};