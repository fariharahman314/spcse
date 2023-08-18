//code for displaying integer numbers using array//
#include<stdio.h>
int main()
{
    int i;
    int number[5];
    printf("Enter five integer numbers:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&number[i]);

    }
    printf("Displaying the numbers:");
    for(i=0; i<5; i++)
    {

        printf("%d\n",number[i]);
    }

    return 0;
}
