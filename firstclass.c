#include <stdio.h>
int main()
{
    int check = 0;
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    printf("Enter the number to be searched :\n");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            check = 1;
            printf("The element %d is present \n", &num, &i);
            break;
        }
    }
    if (check == 0)
        printf("The element is not present in the array \n");

return 0;
}