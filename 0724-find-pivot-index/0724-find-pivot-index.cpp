class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,0) , post(n,0);
        for(int i=1;i<n;i++)
        {
           pre[i] = pre[i-1] + nums[i-1];
           post[n-i-1] = post[n-i] + nums[n-i]; 
        }
        int indx = -1;
        for(int i=0;i<n;i++)
        {
            if(pre[i] == post[i])
                {
                    indx = i;
                    break;
                }
        }

        return indx;
    }
};