class Solution {
public:
    int mirrorDistance(int n) {
      int num = n,ans=0,i=0;
        while(num>0)
        {
            int rem = num % 10;
            ans = rem + ans*10;
            num /= 10;
            // i++;
        }
        return abs(n-ans);
    }
};