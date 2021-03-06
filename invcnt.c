/* C program for merge sort */
#include<stdlib.h>
#include<stdio.h>
/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
long long int merge(long long int arr[], int l, int m, int r)
{
	long long invcount=0;
    int i, j,k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            invcount=invcount+(n1-i);
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    return invcount;
}
 
/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
long long int mergeSort(long long int arr[], int l, int r)
{
	long long int invcount=0;
    if (l < r)
    {
        int m = (l+r)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        invcount=mergeSort(arr, l, m);
        invcount+=mergeSort(arr, m+1, r);
        invcount+=merge(arr, l, m, r);
    }
    return invcount;
}
 
/* Driver program to test above functions */
int main()
{
	int t,n,i;
    long long int arr[200000];
    scanf("%d",&t);
    printf("\n");
    while(t--){
       scanf("%d",&n);
       for(i=0;i<n;i++)
          scanf("%lld",&arr[i]);
       printf("%lld\n\n",mergeSort(arr,0,n-1));
    }
    return 0;
}
