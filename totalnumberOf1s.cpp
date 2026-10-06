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
    int lo=0;
    int hi=n-1;
    int c=0;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1)
        {
            if(arr[mid-1]!=1)
            {
                for(int i=mid;i<n;i++)
                {
                    c++;
                }
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<1) lo=mid+1;
        else    hi=mid-1;
    }
    cout<<"No. of 1's = "<<c;
}