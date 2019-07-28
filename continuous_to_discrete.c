#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main()
{
    int i,n;
    float x,t,y[50];
    printf("Enter the number of sample you want : ");
    scanf("%d",&n);
    printf("Enter the time interval t : ");
    scanf("%f",&t);
    for(i=0;i<n;i++)
{
    y[i]=5*sin(t*pi*i);
    printf("%.2f ",y[i]);
}
}
