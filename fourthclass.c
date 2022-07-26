#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array ----------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at %d index", i);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int second_min = arr[0];
    int second_min_index = 0;
    int first = arr[0];
    int max_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
            max_index = i;
        }
        if (arr[i] < min)
        {
            second_min = min;
            min = arr[i];
        }
        else if (arr[i] < second_min && arr[i] != min)
        {
            second_min = arr[i];
            second_min_index = i;
        }
        }
    int temp = arr[max_index];
    arr[max_index] = arr[second_min_index];
    arr[second_min_index] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
