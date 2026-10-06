#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Enter a sorted array"<<endl;
    for(int i=0;i<n+1;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Entered sorted array :"<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int lo=0;
    int hi=n;
    int mid;
    int num;
    while(lo<=hi)
    {
         mid=lo+(hi-lo)/2;
        if(arr[mid-1]==arr[0])
        {
            num=arr[0];
            break;
        }
        if((arr[mid]==arr[mid+1] || arr[mid]==arr[mid-1]))
        {
            num=arr[mid];
            break;
        }
        else if(arr[mid]<arr[mid+1]) lo=mid+1;
        else hi=mid-1;
    }
    cout<<"Repeated Element = "<<num;
}
