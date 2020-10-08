// Unit area of largest region of 1's ;

void mark_vis(int i,int j,int N,int M,int A[SIZE][SIZE],int &area){
    area++;
    A[i][j]=2;
    if(j+1<M && A[i][j+1]==1){
        mark_vis(i,j+1,N,M,A,area);
    }
    if(i+1<N && j+1<M && A[i+1][j+1]==1){
        mark_vis(i+1,j+1,N,M,A,area);
    }
    if(i+1<N && A[i+1][j]==1){
        mark_vis(i+1,j,N,M,A,area);
    }
    if(i+1<N && j-1>=0 && A[i+1][j-1]==1){
        mark_vis(i+1,j-1,N,M,A,area);
    }
    if(j-1>=0 && A[i][j-1]==1){
        mark_vis(i,j-1,N,M,A,area);
    }
    if(i-1>=0 && j-1>=0 && A[i-1][j-1]==1){
        mark_vis(i-1,j-1,N,M,A,area);
    }
    if(i-1>=0 && A[i-1][j]==1){
        mark_vis(i-1,j,N,M,A,area);
    }
    if(i-1>=0 && j+1<M && A[i-1][j+1]==1){
        mark_vis(i-1,j+1,N,M,A,area);
    }
}

int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
    // Your code here
    int max_area=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1){
                int area=0;
                mark_vis(i,j,N,M,A,area);
                max_area=max(max_area,area);
            }
            
        }
    }
    return max_area;
}