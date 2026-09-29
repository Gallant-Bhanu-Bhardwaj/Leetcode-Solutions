class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = INT_MIN;
        int i = 0, j = height.size()-1;
        while(i<j)
        {
            int water = (j-i) * min(height[i],height[j]);
            maxwater = max(water , maxwater);

            if(height[i] < height[j])
             i++;
            else
             j--; 
        }
        return maxwater;
    }
};