#include<stdio.h>
int main(){
    int n,y_size,i,j,temp;
    printf("Enter the sample number :");
    scanf("%d",&n);
    y_size=2*n-1;
    float x[n],xN[y_size],xcN[y_size], xe[y_size], xo[y_size];
    printf("Enter the samples\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    for(i=0;i<y_size;i++){
        xN[i] = 0.0;
        xcN[i] = 0.0;
        xe[i] = 0.0;
        xo[i] = 0.0;
    }

    for(i=0;i<n;i++)
    {
        xN[i+n-1]=x[i];
    }
    printf("The original signal\n");
    for(i=0;i<y_size;i++)
        printf("%.1f ",xN[i]);

    for(i=y_size-1,j=0;i>=0;i--,j++)
        xcN[j]=xN[i];

    printf("\nThe x(-n) signal\n");
    for(i=0;i<y_size;i++)
        printf("%.1f ",xcN[i]);

    for(i=0; i<y_size; i++){
        xe[i] = (xN[i]+xcN[i])/2;
        xo[i] = (xN[i]-xcN[i])/2;
    }
    printf("\nThe even component \n");
    for(i=0;i<y_size;i++)
        printf("%.1f ",xe[i]);

    printf("\nThe odd component \n");
    for(i=0;i<y_size;i++)
    printf("%.1f ",xo[i]);
    return 0;
}
