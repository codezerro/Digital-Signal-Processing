#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int sig[100],sig1[100],n;

    cout<<"Enter number the signal point"<<endl;
    cin>>n;
    cout<<"Enter the first signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig[i]);
    }
    cout<<"Enter the 2nd signal"<<endl;
    for(int i=0;i<n;i++){
        scanf("%d",&sig1[i]);
    }
    cout<<"the value of addition respect to the input signal"<<endl;
    for(int i=0;i<n;i++){
        cout<<sig[i]*sig1[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
