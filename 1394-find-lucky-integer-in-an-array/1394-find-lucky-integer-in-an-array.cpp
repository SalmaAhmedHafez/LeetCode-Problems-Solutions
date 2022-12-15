class Solution {
public:
    int findLucky(vector<int>& arr) {
        int x = *max_element(arr.begin(), arr.end());
        int n = x + 1, ans = -1;
        vector <int> v(n);

        for(int i = 0; i < arr.size(); i++)
            v[arr[i]]++;
        
        for (int i = n-1; i > 0; i--){
            if(v[i] == i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};