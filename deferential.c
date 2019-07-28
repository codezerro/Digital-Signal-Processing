/// diferentiation of descrete signal
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the sample number :");
    scanf("%d",&n);
    float x[n],t=2, y[n];
    printf("Enter the samples\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);

    for(i=0; i<n-1; i++){
        y[i] = (x[i+1]-x[i])/2;
    }
    printf("The derivative signal\n");
    for(i=0;i<n;i++)
        printf("%.1f ",y[i]);

    return 0;
}
