class Solution {
public:
    int reverse(int x) {
        
    int revnum = 0;
    while(x != 0){ 
        int ld = x % 10; //last digit

        //revnum calculate krne thik pehle check condition
        // Agar revnum abhi hi INT_MAX/10 se bada hai, toh *10 karte hi blast ho jayega
        // Agar revnum abhi hi INT_MAX/10 se equal hai,aur 7 h last digit toh *10 karte hi blast ho jayega(range k bahar it will go 32 bit ka)

        if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && ld > 7)) return 0;  //(khatam loop)
        if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && ld < -8)) return 0;

        //  Agar upar se bach gaya, tabhi safely revnum calculate kro
        revnum = revnum * 10 + ld;   
        x = x / 10;
    }
    return revnum;
}
};
