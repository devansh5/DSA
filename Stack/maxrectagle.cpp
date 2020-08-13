int maxArea(int M[MAX][MAX], int n, int m) {
    // Your code here
    int max_area=0;
    stack<int>s;
    s.push(max_area);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(M[i][j]==1)
            {
                max_area+=M[i][j];
            }
            else if(M[i][j]==0)
            {
                max_area=0;
                break;
            }
        }
        if(s.top()<max_area)
        {
            s.pop();
            s.push(max_area);
        }
    }
    int x=s.top();
    return x;
}