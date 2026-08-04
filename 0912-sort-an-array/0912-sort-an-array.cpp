class Solution {
public:
void heapify(vector<int> &nums, int n ,int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && nums[largest] < nums[left])
     largest = left;
    if(right < n && nums[largest] < nums[right])
     largest = right;

     if(largest != i)
     {
        swap(nums[largest],nums[i]);
        heapify(nums,n,largest);
     }
}
    vector<int> sortArray(vector<int>& nums) {
       int size = nums.size();
       for(int i=size/2-1;i>=0;i--)
       {
        heapify(nums,size,i);
       }

       int heapSize = size;
       while(heapSize>1)
       {
        swap(nums[0],nums[heapSize-1]);
        heapSize--;

        heapify(nums,heapSize,0);
       }
       return nums;
    }
};