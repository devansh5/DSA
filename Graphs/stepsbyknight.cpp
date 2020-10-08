// Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the square chessboard. The next line contains the X-Y coordinates of the knight. The next line contains the X-Y coordinates of the target. 

// Output:
// Print the minimum steps the Knight will take to reach the target position.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minStepToReachTarget() which takes the inital position of Knight (knightPos), the target position of Knight (targetPos) and the size of the chess board (N) as inputs and returns the minimum number of steps required by the knight to reach from its current position to the given target position.

// Expected Time Complexity: O(N2).
// Expected Auxiliary Space: O(N2).

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 1000
// 1 <= knight_pos(X, Y), targer_pos(X, Y) <= N

// Example:
// Input:
// 2
// 6
// 4 5
// 1 1
// 20
// 5 7
// 15 20

// Output:
// 3
// 9

// Explanation:
// Test Case 1:

// Knight takes 3 step to reach from (4, 5) to (1, 1):
// (4, 5) -> (5, 3) -> (3, 2) -> (1, 1).
// bool isinside(int x,int y,int N){
//     if(x>=1 && x<=N && y>=1 && y<=N ){
//         return true;
//     }
//     return false;
// }Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the square chessboard. The next line contains the X-Y coordinates of the knight. The next line contains the X-Y coordinates of the target. 

// Output:
// Print the minimum steps the Knight will take to reach the target position.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minStepToReachTarget() which takes the inital position of Knight (knightPos), the target position of Knight (targetPos) and the size of the chess board (N) as inputs and returns the minimum number of steps required by the knight to reach from its current position to the given target position.

// Expected Time Complexity: O(N2).
// Expected Auxiliary Space: O(N2).

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 1000
// 1 <= knight_pos(X, Y), targer_pos(X, Y) <= N

// Example:
// Input:
// 2
// 6
// 4 5
// 1 1
// 20
// 5 7
// 15 20

// Output:
// 3
// 9

// Explanation:
// Test Case 1:

// Knight takes 3 step to reach from (4, 5) to (1, 1):
// (4, 5) -> (5, 3) -> (3, 2) -> (1, 1).


int minStepToReachTarget(int knightPos[], int targetPos[], int N) {
    // code here
    queue<pair<int,int>>q;
    int distance[N+1][N+1];
    bool visit[N+1][N+1];
    int dx[8]={-2,-2,-1,-1,2,2,1,1};
    int dy[8]={-1,1,-2,2,-1,1,-2,2};
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            distance[i][j]=-1;
            visit[i][j]=false;
        }
    }
    
    distance[knightPos[0]][knightPos[1]]=0;
    visit[knightPos[0]][knightPos[1]]=true;
    if(knightPos[0]==targetPos[0] && knightPos[1]==targetPos[1]){
        return 0;
    }
    q.push({knightPos[0],knightPos[1]});
    
    while(!q.empty()){
        pair<int,int>m=q.front();
        q.pop();
        int x=m.first;
        int y=m.second;
        for(int i=0;i<8;i++){
            if(isinside(x+dx[i],y+dy[i],N) && !visit[x+dx[i]][y+dy[i]] && distance[x+dx[i]][y+dy[i]]==-1){
                int curr_x=x+dx[i];
                int curr_y=y+dy[i];
                visit[curr_x][curr_y]=true;
                distance[curr_x][curr_y]=distance[x][y]+1;
                q.push({curr_x,curr_y});
                if(curr_x==targetPos[0] && curr_y==targetPos[1]){
                    return distance[curr_x][curr_y];
                }
                
                
            
            }
        }
        
    }
}

