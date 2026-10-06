#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {0,0,0,0,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0; 
    int hi = n-1;
    int idx = -1;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == 1)
        {
            if(arr[mid-1]==1)
            {
                hi = mid-1;
            }
            else
            {
                idx = mid;
                break;
            }
        } 
        else  lo = mid+1;
    }
    cout<<n-idx;
}