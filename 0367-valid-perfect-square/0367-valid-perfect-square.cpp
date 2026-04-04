class Solution {
public:
    bool isPerfectSquare(int num) {
       int s=0, e=num/2;
       while(s<e)
       {
        int mid = s + (e-s)/2;
        if(mid == num / mid)
         return true;
        else if(mid > num/mid)
         e=mid-1;
        else  
         s = mid + 1;
       } 
       return false;
    }
};