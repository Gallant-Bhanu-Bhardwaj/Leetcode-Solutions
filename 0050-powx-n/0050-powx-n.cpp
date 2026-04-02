class Solution {
public:
    double myPow(double x, int n) {
        long long binform = n;
        if(n < 0)
        {
            x = 1/x;
            binform = -binform;
        }
        double ans = 1.0;
        while(binform > 0)
        {
            if(binform & 1)
             ans *= x;

            x *= x;
            binform >>= 1;
        }
        return ans;
    }
};