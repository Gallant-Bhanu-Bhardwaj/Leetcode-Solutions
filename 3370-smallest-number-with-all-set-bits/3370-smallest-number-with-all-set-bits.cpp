// class Solution {
// public:
//     long long smallestNumber(long long n) {
//         long long x = 1;
//         while ((x | (x - 1)) < n) { 
//             x <<= 1;
//         }

//         long long res = 1;
//         while (res < n) {
//             res = (res << 1) | 1;  
//         }
//         return res;
//     }
// };

class Solution {
public:
    long long smallestNumber(long long n) {
       int k = floor(log2(n));
       int x = pow(2,k+1) - 1;
       return x;
    }
};

