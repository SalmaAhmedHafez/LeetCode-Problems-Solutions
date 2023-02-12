class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = false;
        if(x > 0){
            unsigned long long int n = log10(x)+1,num = 0, tmp = x , y = x % 10;
            for(int i = 0; i < n; i++){
                num += y * pow(10, n-i-1);
                tmp /= 10;
                y = tmp % 10;
            }
            if (num == x)
                ans = true;
        }
        if(x == 0) 
            ans = true;
        return ans;
    }
};