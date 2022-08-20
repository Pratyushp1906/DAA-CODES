#include <stdio.h>
int binarySearch(int arr[], int low, int high, int x)
{
    int check = 0;
    int count = 0;
    while (low <= high)
    {
        int m = low + (high - low) / 2;
        count++;
        if (arr[m] == x)
        {
            check = 1;
            break;
        }
        if (arr[m] < x)
            low = m + 1;
        else
            high = m - 1;
    }
    if (check == 0)
    {
        printf("The element is  present \n");
        return count;
    }
    else
    {
        printf("The element is not present \n");
        return -1;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int number;
    printf("Enter the number to be searched : \n");
    scanf("%d", &number);
    int count = binarySearch(arr, 0, (n - 1), number);
    printf("The no. of steps of binary search is : %d \n", count);
    return 0;
}