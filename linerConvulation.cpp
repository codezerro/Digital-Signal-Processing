#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void linerConvulation()

int main()
{
    int x[15],h[15],y[15],m,n,i,j;
    printf("Enter the sample size of x(n) : ");
    scanf("%d",&m);
    printf("Enter the sample size of h(n) : ");
    scanf("%d",&n);
    printf("Enter values for x(n)\n");
    for(i=0;i<m;i++){
        scanf("%d",&x[i]);
    }

    printf("Enter values for h(n) \n");
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
    }

    for(i=m;i<=m+n-1;i++){
        x[i]=0;
    }

    for(i=n;i<=m+n-1;i++){
        h[i]=0;
    }


    return 0;
}
