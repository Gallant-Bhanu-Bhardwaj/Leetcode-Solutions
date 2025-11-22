class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int x : nums){
            int md = x % 3;
            if(md != 0) 
             cnt++;  
        }
        return cnt;
    }
};
