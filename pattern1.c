#include <stdio.h>
int main()
{//936 is highest level of pyramid can be made
        int a;
        printf("\nENTER HEIGHT OF YOUR PYRAMID\n");
        scanf("%d", &a);
        int j=1;
        int n=(a*2-1)/2;
        for (int i=1;i<=a;i++)
        {
                for(int m=n;m>0;m--)
                {
                        printf(" ");
                }
                for(int n=1;n<=j;n++)
                {
                   printf("*");
                }
                j=j+2;
                n=n-1;
                printf("\n");
        }
return 0;
}