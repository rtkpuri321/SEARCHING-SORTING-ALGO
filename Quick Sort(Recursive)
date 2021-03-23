// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    int partition (int a[], int low, int high)
    {
       int pivot=a[low],p=low+1,q=high;
       do
       {
           while(a[p]<=pivot)
           {
               p++;
           }
           while(a[q]>pivot)
           {
               q--;
           }
           if(p<q)
           {
               swap(a[p],a[q]);
           }
       }while(p<q);
       
       swap(a[low],a[q]);
       return q;
    }
    
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int low, int high)
    {
        int pivot;
        
        if(low<high)
        {
            pivot=partition(a,low,high);
            quickSort(a,low,pivot-1);
            quickSort(a,pivot+1,high);
        }
    }
    
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
