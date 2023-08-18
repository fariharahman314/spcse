//code for dynamic row, star pyramid type//
#include<stdio.h>
int main()
{
    int i,j,val=1,row;
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",val);
            val++;
        }
        printf("\n");
    }
    return 0;
}
