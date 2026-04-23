class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int min = INT_MAX, x;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                for(int j = 0; j < nums.size(); j++){
                    if(nums[j] == 2){
                        x = abs(i-j);
                        if(x < min) min = x;
                    }
                }
            }
        }
        if(min == INT_MAX) min = -1;
        return min;
    }
};