#include <stdio.h>
int count = 0;

int min(int x, int y)
{
    return (x < y) ? x : y;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        count++;
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        count++;
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        count++;
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n)
{
    int current;
    int low;
    for (current = 1; current <= n - 1; current = 2 * current)
    {
        for (low = 0; low < n - 1; low += 2 * current)
        {
            int mid = min(low + current - 1, n - 1);
            int high = min(low + 2 * current - 1, n - 1);
            merge(arr, low, mid, high);
        }
    }
}

int main()
{
    int n;
    printf("Enter the length of the array :\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, n);

    printf("Array after sorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nTime complexity :\n%d", count);
    return 0;
}