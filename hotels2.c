#include <stdio.h>
#include <stdlib.h>
/* Returns the maximum possible sum less than or equal to the gieven sum */
 long long int subArraySum(int *arr, int n, long long int sum)
{
    /* Initialize curr_sum as value of first element
     and starting point as 0 */
    long long int curr_sum = arr[0], max_sum = 0;
	int start = 0, i;

    /* Add elements one by one to curr_sum and if the curr_sum exceeds the
     sum, then remove starting element */
    for (i = 1; i <= n; i++)
    {
        // If curr_sum exceeds the sum, then remove the starting elements
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        //keep track of the maximum sum so far.
        if (max_sum < curr_sum)
            max_sum = curr_sum;

        curr_sum = curr_sum + arr[i];
    }
     return max_sum;
}
// Driver program to test above function

int main()
{
    int num,i;
    long long int amount;
	int *hotel_price;
	scanf("%d %lld",&num, &amount);
	hotel_price=malloc(num*sizeof(int));
	for(i=1;i<=num;i++){
		scanf("%d", &hotel_price[i-1]);
	} 
	printf("%lld\n", subArraySum(hotel_price,num,amount));
	return 0;
}
