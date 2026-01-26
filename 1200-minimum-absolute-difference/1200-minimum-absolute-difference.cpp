class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> sol;
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1] < diff)
             diff = arr[i]-arr[i-1]; 
        }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==diff)
             {
                sol.push_back(arr[i-1]);
                sol.push_back(arr[i]);
                ans.push_back(sol);
                sol.pop_back();
                sol.pop_back();
             }
        }
        return ans;
    }
};