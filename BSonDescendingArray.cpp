#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered elements are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the target"<<endl;
    int x;
    cin>>x;
    int hi=n-1;
    int lo=0;
    bool f=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
        {
            f=true;
            break;
        }
        else if(arr[mid]>x) lo=mid+1;
        else hi=mid-1;
    }
    if(f==true) cout<<"Element found";
    else cout<<"Element not found";

}