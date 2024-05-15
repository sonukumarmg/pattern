#include <stdio.h>
int main()
{
int n;
printf("enter value of n: ");
scanf("%d",&n);
 int a= 2*n /3;
for (int i=1;i<=a;i++)
{
        for(int j=1;j<=n;j++)
        {

                if(i==a||i==1 ||j==n||j==1)
                        printf("*");
                else
                        printf(" ");
        }
        printf("\n");
}
return 0;
}