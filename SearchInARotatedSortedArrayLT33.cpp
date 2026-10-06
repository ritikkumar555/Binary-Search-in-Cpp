#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target)
{
    int n = nums.size();
    int lo = 0;
    int hi = n-1;
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if(nums[mid]==target) return mid;
        //check left sorted array
        if(nums[lo]<=nums[mid])
        {
            if(nums[lo]<=target && target<=nums[mid])
            {
                hi = mid+1;
            }
            else 
            {
                lo = mid+1;
            }
        }
        else
        {
            if(nums[mid]<=target && target<=nums[hi])
            {
                lo = mid+1;
            }
            else 
            {
                hi = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {4,6,7,0,1,2};
    int target = 0;
    cout<<search(v,target);
}