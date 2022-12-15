class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector <int> v(arr.size()-1);
        vector<vector<int>> ans;  
        for (int i = 0; i < arr.size()-1; i++)
            v[i] = arr[i+1] - arr[i];
        
        int m = *min_element(v.begin(), v.end());
        for(int i = 0; i < arr.size()-1 ; i++){
            if (v[i] == m){
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    } 
};