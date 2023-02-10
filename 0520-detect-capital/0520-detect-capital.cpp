class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans = true;
        if(word[0] >= 97){
            for(int i = 1; i < word.length(); i++){
                if(word[i] < 97){
                    ans = false;
                    break;
                }
            }
        }
        else{
            if(word[1] >= 97){
                for(int i = 2; i < word.length(); i++){
                if(word[i] < 97){
                    ans = false;
                    break;
                }
            }}
            else {
                for(int i = 2; i < word.length(); i++){
                if(word[i] >= 97){
                    ans = false;
                    break;
                }
            } 
            }
        }
        return ans;
    }
};