#include<stdio.h>
int main()
{
int n;
printf("enter the number of star required(both in rows and columns):  ");
scanf("%d",&n);
for (int i=1;i<=n;i++){
        for (int i=1;i<=n;i++){
                printf("*");
        }
        printf("\n");
         }
        return 0;
}