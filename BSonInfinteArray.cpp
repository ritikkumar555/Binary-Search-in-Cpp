#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,7,10,18,20};
    int lo=0;
    int hi=1;
    int target=10;
    while(arr[hi]<target)
    {
        lo=hi;
        hi*=2;
    }
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            flag=true;
            break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==true) cout<<"Element is found in infinte array";
    else cout<<"Element not found";
}