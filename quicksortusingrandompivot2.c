 #include <stdio.h>
 #include <stdlib.h>
 int swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int* arr, int start, int end)
{
    srand(time(NULL));
    int pivotIndex = start + rand() % (end-start+1);
    int pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[end]); // move pivot element to the end
    pivotIndex = end;
    int i = start -1,j;
 
    for( j=start; j<=end-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i = i+1;
            swap(&arr[i], &arr[j]);
        }
    }
 
    swap(&arr[i+1], &arr[pivotIndex]);
    return i+1;
}
 
void quick_sort(int* arr, int start, int end)
{
    if(start < end) {
        int mid = partition(arr, start, end);
        quick_sort(arr, start, mid-1);
        quick_sort(arr, mid+1, end);
    }
}
void main()
{
	int t,num,sum,i;
	scanf("%d",&t);
	int *M,*W;
    while(t--){
    	sum=0;
    	scanf("%d", &num);
    M=W=malloc(num*sizeof(int));
    for(i=0;i<num;i++)
       scanf("%d", &M[i]);
    for(i=0;i<num;i++)
       scanf("%d", &W[i]);
    quick_sort(M,0,num-1);
    quick_sort(W,0,num-1);
    for(i=0;i<num;i++)
       sum+=M[i]*W[i];
    printf("%d\n", sum);
}
}
