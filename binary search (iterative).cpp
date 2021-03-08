#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void binarysrch(ll a[], ll n, ll x)
{
    ll l=0,h=n-1,ans=-1;
    while(h>=l)
    {
        ll mid=(l+h)/2;
        if(a[mid]==x)
        {
            ans=mid;
            break;
        }
        if(a[mid]>x)
        h=mid-1;
        else
        l=mid+1;
    }
    if(ans>=0)
    cout<<"Position of the number in array: "<<ans + 1;
    else
    cout<<"Number not found";
}

int main()
{
    ll n,i,j;
    cout<<"Enter the size of array:\n";
    cin>>n;
    ll a[n];
    cout<<"Enter the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll x;
    cout<<"Enter the number to search:\n";
    cin>>x;
    binarysrch(a,n,x);
    return 0;
}

