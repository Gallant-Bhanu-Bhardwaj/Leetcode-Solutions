class Solution {
public:
    int totalMoney(int n) {
        int money = 0, tmoney = 0, j = 1;
        for (int i = 1; i <= n; i++) {
            if (i % 7 == 1) {
                money++;
                j = money;
            }

            tmoney += j;
            j++;
        }
        return tmoney;
    }
};