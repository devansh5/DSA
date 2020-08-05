// A rat in maze

// Consider a rat placed at (0, 0) in a square matrix of order N*N. It has to reach the destination at (n-1, n-1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and cannot be crossed while value 1 at a cell in the matrix represents that it can be travelled through.

// Input:
// The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line contains an integer N denoting the size of the square matrix. The next line contains N*N space separated values of the matrix m where 0's represents blocked paths and 1 represent valid paths.

// Output:
// For each test case, the output will be space separated sorted strings denoting all directions, which the rat could take to reach the destination. Print -1 if no such path exists.

// User Task:
// Your task is to complete the function printPath() which returns a sorted array of strings denoting all the possible paths which the rat can take to reach the destination at (n-1, n-1). If no such path exists the function should return an empty array.

// Expected Time Complexity: O((N2)4).
// Expected Auxiliary Space: O(L*X), L = length of the path, X = number of paths.


// Constraints:
// 1 <= T <= 100
// 2 <= N <= 5
// 0 <= matrix[i][j] <= 1

// Example
// Input:
// 3
// 4
// 1 0 0 0 1 1 0 1 0 1 0 0 0 1 1 1
// 4
// 1 0 0 0 1 1 0 1 1 1 0 0 0 1 1 1
// 2
// 1 0 1 0 

// Output:
// DRDDRR
// DDRDRR DRDDRR
// -1

// Explanation:
// Testcase 2: The given input is in the form
// 1 0 0 0
// 1 1 0 1
// 1 1 0 0
// 0 1 1 1


void direction(int row,int col,int m[MAX][MAX],int n,string &s,vector<string>&ans)
{
    if(row==-1||row==n||col==-1||col==n||m[row][col] == 0)
    {
        return;
    }
   
    if(row==n-1&&col==n-1)
    {
        ans.push_back(s);
        return;
    }
    m[row][col]=0;
    s.push_back('D');
    direction(row+1,col,m,n,s,ans);
    s.pop_back();

 
    
    s.push_back('L');
    direction(row,col-1,m,n,s,ans);
    s.pop_back();

   
        
    s.push_back('R');
    direction(row,col+1,m,n,s,ans);
    s.pop_back();
  
   
        
    s.push_back('U');
    direction(row-1,col,m,n,s,ans);
    s.pop_back();
    
    m[row][col]=1;
    
}

vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here
    string s;
    vector<string>ans;
    int row=0;
    int col=0;
    
    direction(row,col,m,n,s,ans);
    
    return ans;
}