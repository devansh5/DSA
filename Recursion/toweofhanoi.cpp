#include<iostream>
#include<stdio.h>
using namespace std;


void towerofhanoi(int n,char frompeg,char topeg,char auxpeg)
{
    if(n==1)
    {
        printf("Move disk 1 from peg %c to peg %c s1 ",frompeg,topeg);
        cout<<endl;
        return;
    }
    towerofhanoi(n-1,frompeg,auxpeg,topeg);
    
    printf("Move disk %d from peg %c to peg %c s2",n,frompeg,topeg);
    cout<<endl;

    towerofhanoi(n-1,auxpeg,topeg,frompeg);
}

int main()  
{
    int n;

    cout<<"Enter the value of n:";
    cin>>n;

    char A='a', B='b', C='c';

    towerofhanoi(n,A,B,C);

}
