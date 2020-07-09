#include <stdio.h>

int primeno(int, int);

int main()
{
    int num, check;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);

    if (check == 1)
    {
        printf("%d IS A PRIME NUMBER\n", num);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER\n", num);
    }

    return 0;
}

int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }
}
