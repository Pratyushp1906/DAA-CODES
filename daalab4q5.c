#include <stdio.h>
int t1 = 0, t2 = 0;

long bruteforceMethod(int A, int num)
{
    long pow = 1;

    while (num > 0)
    {
        pow *= A;
        num--;
        t1++;
    }

    return pow;
}

long minimalStepsMethod(int A, int num)
{
    long pow;
    if (num == 0)
        return 1;

    pow = minimalStepsMethod(A, num / 2);

    if (num % 2 == 0)
    {
        t2++;
        return pow * pow;
    }

    else
    {
        t2++;
        return A * pow * pow;
    }
}

int main()
{
    int A, num;
    printf("Enter Number and Power: ");
    scanf("%d %d", &A, &num);

    long pow = bruteforceMethod(A, num);
    pow = minimalStepsMethod(A, num);
    printf("\num\nThe value of A^num = %ld\num\num", pow);
    printf("\nNumber of Multiplications using Bruteforce Algorithm: %d\num", t1);
    printf("\nNumber of Multiplications using Divide-and-Conquer Algorithm: %d\num", t2);
}