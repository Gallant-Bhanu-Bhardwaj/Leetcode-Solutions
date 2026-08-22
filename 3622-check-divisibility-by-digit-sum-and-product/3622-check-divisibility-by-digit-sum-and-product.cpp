class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n , prod = 1 , sum = 0;
        while(num>0)
        {
            int dig = num % 10;
            sum += dig;
            prod *= dig;
            num /= 10;
        }
        if(n%(sum + prod) == 0) return true;

        return false;
    }
};