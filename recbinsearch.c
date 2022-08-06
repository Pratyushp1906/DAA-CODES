#include <stdio.h>
int main()
{
    printf("Enter the no of elements in array \n");
    int n;
    scanf("%d", &n);
    int ar[n];
    printf("Enter the numbers in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int k;
    printf("Enter no to search \n");
    scanf("%d", &k);
    int low = 0;
    int high = n - 1;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ar[mid] > k)
            high = mid - 1;
        else if (ar[mid] < k)
            low = mid + 1;
        else
        {
            index = mid;
            break;
        }
    }
    if (index == -1)
        printf("Element not found");
    else
        printf("Element found at %d ", index);
}