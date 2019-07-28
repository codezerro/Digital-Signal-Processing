#include<stdio.h>


int main()
{
 int n,m,p,i,j;
 int x[15],y[15],h[15];
 printf("Enter the sample size of output signal y(n) : ");

 scanf("%d",&p);
 printf("Enter the values of output signal y(n)\n");
 for(i=0;i<p;i++)
    scanf("%d",&y[i]);

 printf("Enter the sample size of impulse signal h(n) : ");
 scanf("%d",&m);
 printf("Enter the values of impulse signal h(n)\n");
 for(i=0;i<m;i++)
    scanf("%d",&h[i]);

 n=p-m+1;
///append 0 to h(n)
 for(i=m;i<n;i++)
    h[i]=0;

 ///finding values for input signal x(n)
 for(i=0;i<n;i++)
 {
     x[i]=y[i];
     for(j=0;j<i;j++){
        x[i]=x[i]-(x[j]*h[i-j]);
     }

     x[i]=x[i]/h[0];

 /// display input signal
 printf("The input signal is\n");
 for(i=0;i<n;i++)
    printf("%d ",x[i]);


}
