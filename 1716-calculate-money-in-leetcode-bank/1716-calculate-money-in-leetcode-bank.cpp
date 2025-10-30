class Solution {
public:
    int totalMoney(int n) {
        int fullWeeks = n / 7;
        int remainingDays = n % 7;

        // money from all full weeks
        int moneyFromWeeks = fullWeeks * 28 + (7 * fullWeeks * (fullWeeks - 1)) / 2;

        // money from remaining days in the next week
        int moneyFromRemaining = remainingDays * (2 * (fullWeeks + 1) + (remainingDays - 1)) / 2;

        return moneyFromWeeks + moneyFromRemaining;
    }
};
