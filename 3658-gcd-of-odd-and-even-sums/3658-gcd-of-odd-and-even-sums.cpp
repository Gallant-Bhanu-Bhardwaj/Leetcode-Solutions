class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;

        return gcd(b, a % b);
    }
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0, sumeven = 0;
        int a1 = 1, d = 2;
        sumodd = ((n) * (2 * a1 + (n - 1) * d)) / 2;

        int a2 = 2;
        sumeven = ((n) * (2 * a2 + (n - 1) * d)) / 2;

        return gcd(sumodd, sumeven);
    }
};