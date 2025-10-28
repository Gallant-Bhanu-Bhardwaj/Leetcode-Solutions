       // BRUTE FORCE
// class Solution {
// public:
//     int countValidSelections(vector<int>& nums) {
//         vector<int> curr ;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i] == 0)
//              curr.push_back(i);
//         }
//         int lhsSum =0 , rhsSum=0, j=0, ans=0;
//         while(j<curr.size())
//         {
//             for(int i=0; i<curr[j];i++)
//         {
//             lhsSum += nums[i];
//         }
//         for(int i=curr[j]+1; i<nums.size();i++)
//         {
//             rhsSum += nums[i];
//         }
//         if(lhsSum == rhsSum)
//          ans += 2;

//        else if (abs(lhsSum - rhsSum) == 1)
//          ans += 1; 

//          j++;
//          lhsSum =0, rhsSum =0;
//         }

//  return ans;
//     }
// };
// // TC = O(N*N) , SC = O(N). {Brute force}





//         // BETTER SOLN
// class Solution {
// public:
//     int countValidSelections(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> prefix(n + 1, 0);
//         for (int i = 0; i < nums.size(); i++) {
//             prefix[i + 1] = prefix[i] + nums[i];
//         }

//         int totalsum = prefix[n], ans = 0;

//         for (int i = 0; i < n; i++) {
//             if (nums[i] == 0) {
//                 int left = prefix[i];
//                 int right = totalsum - prefix[i + 1];

//                 if (left == right)
//                     ans += 2;

//                 else if (abs(left - right) == 1)
//                     ans += 1;
//             }
//         }
//         return ans;

//         // TC = O(N) , SC = O(N) {Better}
//     }
// };



        // OPTIMAL SOLUTION
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
       int n = nums.size() , ans = 0;
       long long int leftsum = 0;
       long long int rightsum = 0;

       int totalsum = 0;
       for(auto x : nums)
        totalsum += x;

       for(int i=0;i<n;i++)
       {
        if(nums[i] == 0)
        {
            rightsum = totalsum - leftsum - nums[i];

            if(leftsum == rightsum)
             ans += 2;
            else if(abs(leftsum - rightsum) == 1)
             ans += 1; 
        }
        leftsum += nums[i];
       } 
       return ans;
    }
};

