class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        int n = senate.length();

        for (int i = 0; i < n; i++) {
            char ch = senate[i];
            if (ch == 'R')
                r.push(i);
            else
                d.push(i);
        }

        while (!r.empty() && !d.empty()) {
            int m = r.front();
            int o = d.front();

            r.pop();
            d.pop();

            if (m < o)
                r.push(n + m);
            else
                d.push(n + o);
        }

        return r.empty() ? "Dire" : "Radiant";
    }
};