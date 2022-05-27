class Solution {
public:
    bool isPalindrome(int x) {
        string n=to_string(x);
        string t=n;
        reverse(t.begin(), t.end());
        if(t==n){
            return true;
        }else{
            return false;
            }
    }
};