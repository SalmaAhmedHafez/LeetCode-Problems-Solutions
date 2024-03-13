class Solution {
public:
    int pivotInteger(int n) {
        int tmp = n * (n + 1) / 2;
        int sq = sqrt(tmp);
        if(sq * sq == tmp)
            return sq;
        return -1;
    }
};