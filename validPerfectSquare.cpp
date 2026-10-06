#include<iostream>
using namespace std;
bool isPerfectSquare(int num) 
{
    int lo=0;
    int hi=num;
    while(lo<=hi)
    {
        int mid= lo+(hi-lo)/2;
        long long m=(long long) mid;
        long long x=(long long) num;
        if((m*m)==x) return true;
        else if((m*m)<x) lo=mid+1;
        else hi=mid-1;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(isPerfectSquare(n)==true) cout<<"It is a Vald Perfect Square";
    else cout<<"It is not a Vald Perfect Square";
}