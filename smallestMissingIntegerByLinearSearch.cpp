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
    for(int i=0;i<n;i++)
    {
        int diff=arr[i+1]-arr[i];
        if(arr[i]<arr[i+1] && diff!=1)
        {
            cout<<arr[i]+1;
            break;
        }
    }
    
}
