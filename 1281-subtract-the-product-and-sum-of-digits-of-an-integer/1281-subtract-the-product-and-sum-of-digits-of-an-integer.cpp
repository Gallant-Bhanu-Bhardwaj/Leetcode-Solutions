class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        long long int sum = 0, product = 1;
        while(num > 0)
        {
            int rem = num%10;
            sum += rem;
            product *= rem;
            num /= 10;
        }
        return product - sum;
    }
};