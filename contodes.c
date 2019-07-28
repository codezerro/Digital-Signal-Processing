#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main()
{
    int i,n;
    float T,y[50];
    printf("Enter the number of sample you want : ");
    scanf("%d",&n);
    printf("Enter the sampling period time T: ");
    scanf("%f",&T);
    for(i=0;i<n;i++){
        y[i]=5*sin(pi*i*T);
        printf("%.2f ",y[i]);
    }
    return 0;
}
