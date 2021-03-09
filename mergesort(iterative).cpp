#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void merge(ll a[],ll mid,ll low,ll high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(ll i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}

void mergesort(ll a[], ll low, ll high)
{
    ll mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a, low, mid);
        mergesort(a , mid+1 ,high);
        merge(a,mid,low,high);
    }
}

int main()
{
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

