#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define SIZE 55
using namespace std;

void spiral(int M,int N,int ar[SIZE][SIZE])
{
    int i,top=0,left=0;
    while(top<M && left<N)
    {
        for(i=left;i<N;++i)
        {
            cout<<ar[top][i]<<" ";
        }
        top++;
        for(i=top;i<M;++i)
        {
            cout<<ar[i][N-1]<<" ";
            
        }
        N--;
        if(top<M)
        {
            for(i=N-1;i>left;--i)
            {
                cout<<ar[M-1][i]<<" ";
            }
            M--;
        }
        if(left<N)
        {
            for(i=M-1;i>top;--i)
            {
                cout<<ar[i][left]<<" ";
            }
            left++;
        }
        
        
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int M,N;
    cin>>M;
    cin>>N;
    int ar[SIZE][SIZE]={{0}};
    int i=0;
    int j=0;
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cin>>ar[i][j];
        }
    }
    spiral(M,N,ar);
    return 0;
}

