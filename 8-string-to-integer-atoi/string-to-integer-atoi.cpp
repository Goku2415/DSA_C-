class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0, sign = 1; // +ve by default

        // 1️⃣ Skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // 2️⃣ Check sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        // 3️⃣ Read digits
        while (i < s.size() && isdigit(s[i])) {
            // 4️⃣ Check for overflow
            if (num > INT_MAX / 10 ||
               (num == INT_MAX / 10 && s[i] > '7')) {

                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i] - '0');
            i++;
        }

        return num * sign;
    }
};

