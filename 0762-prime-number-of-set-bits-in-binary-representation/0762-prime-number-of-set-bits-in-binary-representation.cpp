class Solution {
public:
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    if (n % 2 == 0) return false;  // eliminate even numbers

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left ; i<= right; i++)
        {
            int bits = __builtin_popcount(i);
            if(isPrime(bits))
             count++;
        }
        return count;
    }
};