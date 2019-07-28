#include<stdio.h>
int main(){
    int n,m,i,j,temp;
    printf("Enter the sample number :");
    scanf("%d",&n);
    m=2*n-1;
    float x[n],xN[m],xcN[m];
    printf("Enter the samples\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    for(i=0;i<m;i++)
    {
        xN[i]=0.0;
        xcN[i]=0.0;
    }

    for(i=0;i<n;i++)
    {
        xN[i+n-1]=x[i];
    }
    printf("The original signal\n");
    for(i=0;i<m;i++)
        printf("%.1f ",xN[i]);

    for(i=m-1,j=0;i>=0;i--,j++)
      {
         xcN[j]=xN[i];
      }
printf("\nThe -n signal\n");
for(i=0;i<m;i++)
        printf("%.1f ",xcN[i]);

printf("\nThe even component \n");
for(i=0;i<m;i++)
    printf("%.1f ",(xN[i]+xcN[i])/2);

printf("\nThe odd component \n");
for(i=0;i<m;i++)
    printf("%.1f ",(xN[i]-xcN[i])/2);
return 0;
}
