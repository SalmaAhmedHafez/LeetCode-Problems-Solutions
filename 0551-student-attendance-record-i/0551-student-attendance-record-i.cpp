class Solution {
public:
    bool checkRecord(string s) {
        bool ans = true;
        int a = 0, l = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                a++;
                if(a >= 2){
                    ans = false;
                    break;
                }
            }
            else if(s[i] == 'L'){
                if (s[i+1] == 'L' && s[i+2] == 'L'){
                   ans = false;
                   break;
                }

            }
        }
   
        return ans;
    }
};