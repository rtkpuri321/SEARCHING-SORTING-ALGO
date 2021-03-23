#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void bubsort(ll a[],ll n)
{
    if(n==1)
    return;
    
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    }
    bubsort(a,n-1);
}

void print(ll a[],ll n)
{
    for(ll i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    bubsort(a,n);
    print(a,n);
}
