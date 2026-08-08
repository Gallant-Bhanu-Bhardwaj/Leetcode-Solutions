class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0, e = numbers.size()-1;
        vector<int> ans;
        while(s<e)
        {   
            int sum = numbers[s] + numbers[e];
            if(sum < target)
            {
                s++;
            }
            else if( sum > target)
            {
                e--;
            }
            else
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
        }
        return ans;
    }
};