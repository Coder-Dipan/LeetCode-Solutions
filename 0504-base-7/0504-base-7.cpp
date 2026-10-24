class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";

        bool negative = num < 0;

        if(negative){
            num = -num;
        }

        string digit = "";
        while(num > 0){
            int rem = num % 7;
            digit += to_string(rem);
            num /= 7;
        }

        reverse(digit.begin(), digit.end());

        if(negative){
            digit = '-' + digit;
        }

        return digit;
    }
};