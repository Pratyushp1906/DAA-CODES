#include <stdio.h>
int Binarysearch(int ar[], int low, int high, int k)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (ar[mid] > k)
    {
        high = mid - 1;
        Binarysearch(ar, low, high, k);
    }
    else if (ar[mid] < k)
    {
        low = mid + 1;
        Binarysearch(ar, low, high, k);
    }
    else
    {
        return mid;
    }
}
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
    int index = Binarysearch(ar, low, high, k);
    if (index == -1)
        printf("Element not found");
    else
        printf("Element found at %d ", index);
}