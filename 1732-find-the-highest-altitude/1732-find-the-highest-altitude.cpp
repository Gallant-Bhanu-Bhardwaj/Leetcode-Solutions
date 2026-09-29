class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0, alt = 0;
        for(auto x : gain)
        {
            alt += x;
            maxi = max(maxi,alt);
        }
        return maxi;
    }
};