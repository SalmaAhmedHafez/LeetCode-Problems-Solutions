class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans = false;
        if (n > 0){
           if(ceil(log2(n)) == floor(log2(n)))
              ans = true;
        }

        return ans;
    }
};