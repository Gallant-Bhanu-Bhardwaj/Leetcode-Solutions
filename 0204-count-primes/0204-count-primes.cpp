class Solution {
public:
    int countPrimes(int n) {
        vector<int> a(n,1);
        if(n==0 || n==1)
         return 0;
        for(int i=2;i<n;i++)
        {
            if(a[i] != 0)
            {
                int temp = 2;
                while(temp*i<n)
                {
                    a[temp*i] = 0;
                    temp++;
                }
            }
        }
        int sum = 0;
        for(int x:a) 
        {
            sum += x;
        }
        return sum-2;
    }
};