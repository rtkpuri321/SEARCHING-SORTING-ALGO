#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll binarysrch(ll a[], ll l,ll h,ll x)
{
    if(h>=l)
    {
        ll mid=(l+h)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]>x)
            return binarysrch(a,l,mid-1,x);
        else
            return binarysrch(a,mid+1,h,x);
    }
    return -1;
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
    ll l=0,h=n-1;
    if(binarysrch(a,l,h,x)>=0)
    cout<<"Position of the number in array: "<<binarysrch(a,l,h,x)+ 1;
    else
    cout<<"Number not found";
    return 0;
}

