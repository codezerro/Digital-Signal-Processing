#include<stdio.h>
int main()
{
    int m,n,i,j,p,temp,sum;
    int x1[15],x2[15],y[15],matr[15][15];

    printf("Enter the sample size of x1(n) : ");
    scanf("%d",&m);

    printf("Enter the values of x1(n)\n");
    for(i=0;i<m;i++)
        scanf("%d",&x1[i]);

    printf("Enter the sample size of x2(n) : ");
    scanf("%d",&n);

    printf("Enter the values of x2(n)\n");
    for(i=0;i<n;i++)
     scanf("%d",&x2[i]);

    if(m!=n)
    {
        if(m>n) p=m;
        else p=n;
    }
    else p=m;

    for(i=m;i<p;i++)
        x1[i]=0;
    for(i=n;i<p;i++)
        x2[i]=0;
///matrix initialization with zero
for(i=0;i<p;i++)
 {
     for(j=0;j<p;j++){
      matr[i][j]=0;
     }
 }



///constructing matrix representation of x1(n)

printf("matrix form of x1(n)\n");
 for(i=0;i<p;i++)
    matr[i][0]=x1[i];
 for(i=1;i<p;i++)
 {
     matr[0][i]=matr[p-1][i-1];
     for(j=1;j<p;j++)
     {
         matr[j][i]=matr[j-1][i-1];
     }
 }


 ///print the matrix

 for(i=0;i<p;i++)
 {
     for(j=0;j<p;j++){
        printf("%d  ",matr[i][j]);
     }
     printf("\n");
 }

///matrix multiplication
for(i=0;i<p;i++)
{
    sum=0;
    for(j=0;j<p;j++)
    {
        sum=sum+(matr[i][j]*x2[j]);
    }
    y[i]=sum;
}
printf("The output signal\n");
for(i=0;i<p;i++)
    printf("%d ",y[i]);

    return 0;
}
