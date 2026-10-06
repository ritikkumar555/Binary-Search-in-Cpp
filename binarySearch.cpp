#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter a sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Entered sorted array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the target"<<endl;
    int target;
    cin>>target;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int mid;
    while(lo<=hi)
    {
         mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            flag=true;
            break;
        }
        else if(arr[mid]<target)
        {
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(flag==true) cout<<"Element found @ index = "<<mid;
    else cout<<"Error 404!Element not found";
}