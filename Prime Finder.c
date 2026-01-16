#include <stdio.h>
int main()
{
    int n;
    int c = 0;
    printf("Give me your number");
    scanf("%d", &n);
    // now
    if (n < 1)
    {
        printf("%d is not a prime number");
    }
    else
    {
        for (int i = 2; i <= (n / 2); i++)
        {
            if (n % i == 0)
            {
                c += 1;
                break;
            }
        }
    }
    if (c == 0)
    {
        printf("Prime number");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}
