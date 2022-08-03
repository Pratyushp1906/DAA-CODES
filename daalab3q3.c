#include <stdio.h>
int t = 0;
void sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        t++;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int a[100];

    printf("Enter Distinct Elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("\nArray: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    int ch;
    while (ch != 3)
    {
        printf("\n\nMENU: \n");
        printf("1. Insert\n");
        printf("2. Remove Bottom Half\n");
        printf("3. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            n++;
            printf("\nEnter New Element: ");
            scanf("%d", &a[n - 1]);
            sort(a, n);
            printf("\nNew Array: ");
            for (int i = 0; i < n; i++)
                printf("%d ", a[i]);
        }

        else if (ch == 2)
        {
            int mid;
            if (n % 2 == 0)
                mid = n / 2;
            else
                mid = n / 2 + 1;

            for (int i = 0; i < mid; i++)
            {
                t++;
                a[i] = a[mid + i];
            }

            n = n - mid;

            printf("\nUpdated Array: ");

            for (int i = 0; i < n; i++)
                printf("%d ", a[i]);

            printf("\nTime Complexity: %d\n", t);
        }
    }
}