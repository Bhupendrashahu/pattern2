#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter the no for print triangle \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
