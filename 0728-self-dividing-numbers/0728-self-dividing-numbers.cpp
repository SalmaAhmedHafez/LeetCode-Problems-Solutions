class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans(0);
        
        for(int i = left; i <= right; i++){
            int n = log10(i)+1, x = i, y = i % 10, flag = 0;
            for(int j = 0; j < n; j++){
                if(y == 0 || i % y != 0) 
                    break;
                else {
                    flag++;
                    x /= 10;
                    y = x % 10;
                }
                   
            }
            if(flag == n)
                ans.push_back(i);
        }
        return ans;
    }
};