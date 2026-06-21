class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> count(100001,0);
        for( int x : costs)
         count[x]++;
          int ans = 0;

        for (int cost = 1; cost <= 100000; cost++) {
            if (count[cost] == 0) continue;

            int canBuy = min(count[cost], coins / cost);

            ans += canBuy;
            coins -= canBuy * cost;

            if (coins < cost)
                continue;
        }

        return ans;
    }
};