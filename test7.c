#include<stdio.h>

/* Returns the maximum possible sum less than or equal to the gieven sum */
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of first element
     and starting point as 0 */
    int curr_sum = arr[0], max_sum = 0, start = 0, i;

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
    int arr[] = {7, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", n);
    int sum = 9;
    printf("Max Sum = %d\n", subArraySum(arr, n, sum));
    return 0;
}
