class Solution {
public:
    bool isPalindrome(int x) {
        long long revnum = 0 , dup = x;
    while(x>0){ //ab ye negative values pe v kaam karega
        int ld = x%10;
revnum = revnum * 10 +ld;   //ye formula trailing zeros waale case mai v kaam aayega
        x = x/10;
    }
    if (revnum==dup) return true;
    else return false;
    }
};