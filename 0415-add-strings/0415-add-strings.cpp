class Solution {
public:
    string addStrings(string num1, string num2) {
        string str = "";
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int nom1 = (i >= 0) ? num1[i] - '0' : 0;
            int nom2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = nom1 + nom2 + carry;
            carry = sum / 10;

            str += (sum % 10) + '0';

            i--;
            j--;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};