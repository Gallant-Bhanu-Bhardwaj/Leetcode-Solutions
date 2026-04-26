class Solution {
public:
    int getLucky(string s, int k) {
        // Step 1: Convert string to number string
        string num = "";
        for(char c : s) {
            num += to_string(c - 'a' + 1);
        }

        // Step 2: Apply k transformations
        int sum = 0;
        while(k--) {
            sum = 0;
            for(char c : num) {
                sum += c - '0';
            }
            num = to_string(sum);
        }

        return sum;
    }
};