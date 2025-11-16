class Solution {
public:
// Time Complexity  : 0(2n)
// Space Complexity : 0(1)
    vector<vector<int>> subsets(vector<int>& nums) {
        
        // Step 1  :  Create Vector Store Ans;
         vector<vector<int>>Subset;

         // Step 2 : Iterate Over Subset By Bit Manipulation
         for( int Mask = 0 ; Mask<(1<<nums.size()) ; Mask++ ){
              vector<int>Dummy;
             for( int yet = 0 ; yet < nums.size() ; yet++ ){
                  if( Mask & (1<<yet)) {
                     Dummy.push_back(nums[yet]);
                  }
             }
            Subset.push_back(Dummy);
         }
         return Subset;
    }
};