class Solution {
public:
vector<int> Merge(vector<int>& nums, int s, int mid, int e) 
{
    vector<int> temp;
    int i=s , j = mid+1;
    while(i<=mid && j<=e)
    {
        if(nums[i]<= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i <= mid)
    {
        temp.push_back(nums[i]);
            i++;
    }
    while(j <= e)
    {
        temp.push_back(nums[j]);
            j++;
    }
    for(int k=0;k<temp.size();k++)
    {
        nums[k+s] = temp[k];
    }
    return temp;
}
 void MergeSort(vector<int>& nums,int s , int e)
 {
    if(s < e)
    {
        int mid = s + (e-s)/2;
        MergeSort(nums,s,mid);
        MergeSort(nums,mid+1,e);
        Merge(nums,s,mid,e);
    }
 } 
    vector<int> sortArray(vector<int>& nums) {
        int s=0 , e = nums.size()-1;
        MergeSort(nums,s,e);
        return nums;
    }
};