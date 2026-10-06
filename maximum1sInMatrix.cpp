#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter row"<<endl;
    cin>>m;
    cout<<"Enter columns"<<endl;
    cin>>n;
    int a[m][n];
    int i,k;
    cout<<"Enter the elements of the matrix"<<endl;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            cin>>a[i][k];
        }
    }
    cout<<"Entered elements of the matrix are"<<endl;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            cout<<a[i][k]<<" ";
        }
        cout<<endl;
    }
    int c1,c2=0;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            int lo=0;
            int hi=n-1;
             c1=0,c2;
            while(lo<=hi)
            {
                int mid=lo+(hi-lo)/2;
                if(a[i][mid]==1)
                {
                    if(a[i][mid-1]!=1)
                    {
                        for(int j=mid;j<n;j++) c1++;
                        break;
                    }
                    else{
                        hi=mid-1;
                    }
                }
                else if(a[i][mid]<1) lo=mid+1;
                else    hi=mid-1;
            }
        }
        if(c1>c2)
        {
            c2=c1;
        }
    }
    
}