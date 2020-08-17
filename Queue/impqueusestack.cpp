/*The method pop which return the element poped out of the queue*/
//  The structure of the class is
#include<bits/stdc++.h>
using namespace std;
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; 
int StackQueue :: pop()
{
        // Your Code
        if(s1.empty()&&s2.empty())
        {
            return -1;
        }
        if(!s2.empty())
        {
            int y=s2.top();
            s2.pop();
            return y;
        }
        while(s1.empty()!=true)
        {
            int x=s1.top();
            s1.pop();
            s2.push(x);
            
        }
        int z=s2.top();
        s2.pop();
        return z;
}

