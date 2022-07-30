#include <stdio.h>
#include <math.h>
void algo1(int n, int m)
{
    int a = 0;
    int prime[10000] = {0};
    int c = 0;
    if (n == 1)
        a = n + 1;
    else
        a = n;
    for (int i = 2; i <= m; i++)
    {
        c++;
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= m; j = j + i)
            {
                prime[j] = 1;
                c++;
            }
        }
    }
    if (prime[m] == 0)
        printf("\nPrime Number %d", prime[n]);
    else
        printf("Not prime Nuumber");
    printf("\n Sieve Time Complexity : %d\n", c);
}

void algo2(int n)
{

    int flag = 1;

    if (n <= 1)
        flag = 0;
    int c = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        c++;
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf(" Prime number");
    else
        printf("Not a Prime number");

    printf("\n Normal Time Complexity : %d\n", c);
}

int main()
{
    int n;
    printf(" Enter the number you want to check : ");
    scanf("%d", &n);
    algo1(0, n);
    algo2(n);
    return 0;
}