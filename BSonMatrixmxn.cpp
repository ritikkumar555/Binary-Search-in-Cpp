#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter row"<<endl;
    cin>>m;
    cout<<"Enter columns"<<endl;
    cin>>n;
    int arr[m][n];
    int i,k;
    cout<<"Enter the elements of the matrix"<<endl;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            cin>>arr[i][k];
        }
    }
    cout<<"Entered elements of the matrix are"<<endl;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            cout<<arr[i][k]<<"\t";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    int j,lo,hi;
    bool flag;
    int mid=-1;
    for(j=0;j<m;j++)
    {
         lo=0;
         hi=n-1;
        flag=false;
        while(lo<=hi)
        {
             mid=lo+(hi-lo)/2;
            if(arr[j][mid]==target)
            {
                flag=true;
                break;
            }
            else if(arr[j][mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        if(flag==true) 
        break;
    }
    if(flag==true)
    cout<<"Element found at ("<<j<<","<<mid<<")";
    else cout<<"Element not found";
}