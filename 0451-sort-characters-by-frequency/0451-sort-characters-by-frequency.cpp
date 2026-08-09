class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;

        for (auto it : s)
            m[it]++;

        vector<pair<char, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](const pair<char, int>& a,
                                    const pair<char, int>& b) {
            return a.second > b.second;
        });

        string str = "";

        for (int i = 0; i < v.size(); i++) {
            while (v[i].second > 0) {
                str += v[i].first;
                v[i].second--;
            }
        }

        return str;
    }
};