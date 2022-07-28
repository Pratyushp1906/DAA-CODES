#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {17, 21, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, key, j, timestamp = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            timestamp++;
        }
        arr[j + 1] = key;
    }

    int p;
    for (p = 0; p < n; p++)
        printf("%d ", arr[p]);
    printf("\n");
    printf("Time complexity is %d", timestamp);
    return 0;
}
