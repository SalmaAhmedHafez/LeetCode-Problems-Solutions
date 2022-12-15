class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector <int> v(accounts.size());
        for (int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[0].size(); j++){
                v[i] += accounts[i][j]; 
            }
        }
         return *max_element(v.begin(), v.end());
    }
};