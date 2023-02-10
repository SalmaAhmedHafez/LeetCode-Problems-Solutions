class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        bool ans = true;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] >= 65 && s[i] <= 90) ss += s[i]+32;
            else if(s[i] >= 48 && s[i] < 58) ss += s[i];
            else if(s[i] >= 97 && s[i] < 123) ss += s[i];
        }
        n = ss.length();
        for(int i = 0; i < n/2; i++){
            if(ss[i] != ss[n-i-1]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};