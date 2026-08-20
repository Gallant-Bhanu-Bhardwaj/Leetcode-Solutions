class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;

        int i = 0;
        arr1.push_back(nums[i]);
        i++;
        arr2.push_back(nums[i]);
        i++;
        for(; i<n;i++)
        {
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1])
             arr1.push_back(nums[i]);
            else
             arr2.push_back(nums[i]);
        }

        for(int x:arr2)
         arr1.push_back(x);

         return arr1;
    }
};