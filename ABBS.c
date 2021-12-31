#include<stdio.h>
int main()
{
     int first,last,n,sum=0,n1;
     printf("Enter Any No:");
     scanf("%d",&n);
     last=n%10;
     while(n>10)
     {
                n=n/10;
                n1=n;
                sum=last+n1;
                }
                printf("%d",sum);
                }

                
                
