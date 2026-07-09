class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rev = 0;

        if(x < 0) return false;

        while (temp != 0) {
            int digit = temp % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))return false;

            rev = rev * 10 + digit;
            temp /= 10;
        }
        if (x == rev) return true;
        else return false;

        return false;
    }
};