/*#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("The sum is %d\n",sum);
    return 0;
}
*//*
#include<stdio.h>
void swap (int a,int b){
int temp=a;
a=b;
b=temp;
printf("After swapping a=%d,b=%d\n",a,b);
}
int main(){int a,b;
scanf("%d%d",&a,&b);
swap(a,b);
return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)

        {
            continue;

        }
        printf("%d ",i);

    }
    return 0;

}

*//*
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
        max = a;
    else if(b>=a && b>=c)
        max =b;
    else if(c>=a && c>=b)
        max=c;
    printf("The max number is %d\n",max);
return 0;
}

*///even number till 100//
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i=i+2)
    {
        printf("%d ",i);

    }
    return 0;

}*///code for even numbers//
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=2; i<=150; i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}*/
//code for printing cse 100 times//
/*
#include<stdio.h>
int main()
{
    int i;
    int n=100;
    for(i=1; i<=n; i++)
    {
        printf(" CSE ",i);
    }
    return 0;
}

*/
//code for star pyramid//
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        {
            for(j=1; j<=i; j++)

                printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/
//code for upside down pyramid//
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        for(j=4; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
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
