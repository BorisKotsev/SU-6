#include <stdio.h>

int main()
{
    int n;

    printf("1 - zad1 | 2 - zad2\n");
    scanf("%d", &n);

    if(n == 1)
    {
        zad1();
    }
    else if(n == 2)
    {
        zad2();
    }
    else
    {
        printf("Invalid data");
    }

    return 0;
}
