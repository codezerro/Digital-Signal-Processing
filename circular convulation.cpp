#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int sig[100],sig1[100],n,n1,tmp,y[100];
    cout<<"Number of first and 2nd signal"<<endl;
    cin>>n>>n1;
    if(n<n1){
        n=n1;
    }
    cout<<"Enter the first signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig[i]);
    }
    cout<<"Enter the 2nd signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig1[i]);
    }

    for(int i=0;i<n;i++){
        int sum=0;
        tmp=i;
        for(int j=0;j<n;j++){
            sum+=sig[j]*sig1[tmp];
            tmp--;
            if(tmp<0){
               tmp=n-1;
            }
        }
        y[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<y[i]<<"  ";
    }
    cout<<endl;



    return 0;
}


/*
4 4
1 3 5 7
2 4 6 8


84 92 84 60
*/
