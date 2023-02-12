class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int c = 1;
        for (int i = n-1; i >= 0; i--){
            digits[i] += c;
            if(digits[i] == 10){
                digits[i] = 0;
                c = 1;
                if (i == 0)
                    digits.insert(digits.begin(), 1);
            }
            else 
                c = 0;
        }
        return digits;
    }
};