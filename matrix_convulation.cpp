#include<iostream>
#include<stdio.h>
using namespace std;


void makeMatrix(int *sig,int *sig1,int n){

    int mat[100][100],tmp,res[100];

    for(int i=0;i<n;i++){
        tmp=i;
        for(int j=0;j<n;j++){
            mat[i][j]=sig1[tmp];
            tmp--;
            if(tmp<0){
                tmp=n-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"result"<<endl;
    for(int i=0;i<n;i++){
            int sum=0,k=0;
        for(int j=0;j<n;j++){
            sum+=mat[i][j]*sig[k++];
        }
        cout<<sum<<" ";
    }

}


int main()
{
    int sig[100],sig1[100],n,res[100];

    cout<<"Enter the number of signals"<<endl;
    cin>>n;
    cout<<"Enter first signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig[i]);
    }
    cout<<"Enter 2nd signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig1[i]);
    }

    makeMatrix(sig,sig1,n);

    return 0;
}
/*
4
1 3 5 7
2 4 6 8



*/
