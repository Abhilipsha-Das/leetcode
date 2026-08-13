class Solution {
public:
    bool isPalindrome(string s) {
        // extraction and cleaning
    string extracted = "";
    for (char ch : s)
    {
        if (isalnum(ch))                         // Sirf letters (a-z, A-Z) aur digits (0-9) extract karega
            extracted +=tolower(ch); // Lowercase mein convert karke add karega.,,,,,extracted +=tolower(ch);ye o(1 )tym leta h......   extracted = extracted + tolower(ch) ye o(n)tym leta h
    }

    // check for palindrome(iterative equality check)
    int i = 0;
    int j = extracted.length() - 1;
    while (i < j)
    { // length /2 tak hi chalega basically
        if (extracted[i] != extracted[j])
        {
            return false;
        }

        i++;
        j--;
    }
    return true;
    }
};