#include <stdio.h>
int main()
{
    int count;
    int high_count = 1;
    int arr[10];
    int temp;
    printf("enter elements in the array \n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter the element at %d index", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        count = 1;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j] && arr[j] != -1 && i != j)
            {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 1)
            printf("%d ", arr[i]);
        if (count > high_count)
        {
            high_count = count;
            temp = arr[i];
        }
    }
    printf("\nthe highest frequency is of %d", temp);
}