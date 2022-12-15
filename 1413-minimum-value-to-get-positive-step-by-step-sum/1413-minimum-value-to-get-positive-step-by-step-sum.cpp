class Solution {
public:
    int minStartValue(vector<int>& v) {
        int sum = 0, min = 0;
        for(int i = 0; i < v.size(); i++){
            sum += v[i];
            if (sum < min)
                min = sum;
        }
        return (1-min);
    }
};