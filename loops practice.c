/* code for abcd pyramid
#include<stdio.h>
int main()
{
    int i,j;
    int row =5;
    int number=65;
    for(i=0; i<row; i++)
    {
        for(j=0; j<=i; j++)
        {
            char character= (char)(number);
            printf("%c",character);
            number++;
        }
        printf("\n");
    }
    return 0;
}
*/
//code for same pattern using while loop.//
#include<stdio.h>
int main()

{
    int i,j;
    int row=5;
    int number=65;
    while(i<=row)
    {
        while(j<=i-1)
        {
            char character=(char)(number);
            printf("%c ",character);
            j++;
            number++;
        }
        printf("\n");
        j=0;
        i++;
    }
    return 0;}


