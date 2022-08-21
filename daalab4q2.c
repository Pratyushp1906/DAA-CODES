#include <stdio.h>
int count = 0;
void display(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
void merge(int ar[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low, b[100];
    while (i <= mid && j <= high)
    {
        if (ar[i] < ar[j])
            b[k++] = ar[i++];
        else
            b[k++] = ar[j++];
    }

    while (i <= mid)
    {
        b[k++] = ar[i++];
    }
    while (j <= high)
    {
        b[k++] = ar[j++];
    }
    for (i = low; i <= high; i++)
        ar[i] = b[i];
}
void merge_sort(int ar[], int low, int high, int n)
{
    int mid = 0;

    if (low < high)
    {
        mid = (low + high) / 2;
        count++;
        merge_sort(ar, low, mid, n);
        count++;
        merge_sort(ar, mid + 1, high, n);
        merge(ar, low, mid, high);
    }
}
int main()
{
    printf("Enter the size of the array: ");
    int n, i;
    scanf("%d", &n);
    int ar[n];

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Original array is: \n");
    display(ar, n);
    merge_sort(ar, 0, n - 1, n);
    printf("Sorted array is: \n");
    display(ar, n);
    printf("Step count= %d", count);
    return 0;
}