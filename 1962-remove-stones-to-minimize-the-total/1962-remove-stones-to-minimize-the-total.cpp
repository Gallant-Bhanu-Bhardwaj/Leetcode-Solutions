class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());

        for(int i=0;i<k;i++)
        {
            int n = pq.top();
            pq.pop();
            n -= floor(n/2);
            pq.push(n);
        }


        int ans = 0;
        while(pq.size()>0)
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};