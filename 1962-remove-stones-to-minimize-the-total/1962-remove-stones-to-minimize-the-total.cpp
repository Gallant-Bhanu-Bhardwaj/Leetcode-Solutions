class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());

        int ans = 0;
        for(int x : piles)
            ans += x;

        for(int i=0;i<k;i++)
        {
            int n = pq.top();
            pq.pop();

            int removed = n/2;
            n -= removed;
            ans -= removed;

            pq.push(n);
        }
        return ans;
        
    }
};