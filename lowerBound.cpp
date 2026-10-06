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
    cout<<"Enter X"<<endl;
    int X;
    cin>>X;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int mid;
    while(lo<=hi)
    {
         mid=lo+(hi-lo)/2;
        if(arr[mid]==X)
        {
            flag=true;
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]<X)
        {
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(flag==false) cout<<arr[hi];
}
