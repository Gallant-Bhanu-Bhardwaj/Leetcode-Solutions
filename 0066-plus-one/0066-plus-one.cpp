class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from last digit backwards
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;       // no carry needed
                return digits;
            }
            digits[i] = 0;         // carry forward
        }

        // If all digits were 9, we need an extra 1 at the start
        digits.insert(digits.begin(), 1);
        return digits;
    }
};