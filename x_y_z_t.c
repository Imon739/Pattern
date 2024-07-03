#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    if(n %2 == 0){
        printf("Please enter odd number for get pattern !!!");
        return;
    }

    for(i=0; i<n; i++)              /// Shape of X
    {
        for(j=0; j<=n; j++)
        {
            if(i == j || (i + j) == (n - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=(n+1)/2; i++)             /// Shape of Y
    {
        for(j=1; j<=n; j++)
        {
            if(i == j || (i+j) == (n+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=(n-1); i<=n; i++)
    {
        for(j=1; j<=(n-1)/2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    printf("\n\n");


    for(i=1; i<=n; i++)             /// Shape of T
    {
        printf(" *");
    }
    printf("\n");
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=(n-1)/2; j++)
        {
            printf("  ");

        }
        printf(" *");
        printf("\n");
    }
    return 0;
}
