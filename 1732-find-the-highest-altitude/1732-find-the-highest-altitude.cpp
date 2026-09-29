class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = INT_MIN, alt = 0;
        for(auto x : gain)
        {
            alt += x;
            maxi = max(maxi,alt);
        }
        if(maxi < 0) return 0;
        return maxi;
    }
};