#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the sample number :");
    scanf("%d",&n);
    float x1[n],t;
    printf("Enter the samples\n");
    for(i=0;i<n;i++)
        scanf("%f",&x1[i]);
    printf("Enter the time interval\n");
        scanf("%f",&t);
    printf("The derivative signal\n");
    for(i=0;i<n-1;i++)
        printf("%.1f ",(x1[i+1]-x1[i])/t);

}
