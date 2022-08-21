#include <stdio.h>

float SQRT(float n)
{
    int front = 0, last = (int)n;
    int mid;
    float result;
    while (front <= last)
    {
        mid = (front + last) / 2;
        if (mid * mid == (int)n)
        {
            result = mid;
            break;

            if (mid * mid < (int)n)
            {
                result = front;
                front = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        float increment = 0.1;
        for (int i = 0; i < 5; i++)
        {
            while (result * result <= n)
            {
                result += increment;
            }
            result = result - increment;
            increment = increment / 10;
        }
        return result;
    }
}
int main()
{
    float n;
    printf("Enter Number: ");
    scanf("%f", &n);
    float result = SQRT(n);
    printf("\nSquare root of the given no. = %f\n", result);
    return 0;
}
