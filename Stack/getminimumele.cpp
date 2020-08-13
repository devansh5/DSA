// Get minimum element from stack 
// You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

// Input:
// The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer Q denoting the number of queries.
// A Query Q may be of 3 Types:
//     1. 1 x (a query of this type means  pushing 'x' into the stack)
//     2. 2 (a query of this type means to pop element from stack and print the poped element)
//     3. 3 (a query of this type means to print the minimum element from the stack)
// The second line of each test case contains Q queries seperated by space.

// Output:
// The output for each test case will  be space separated integers having -1 if the stack is empty else the element poped out  or min element from the stack.

// User Task:
// You are required to complete the three methods push() which take one argument an integer 'x' to be pushed into the stack, pop() which returns a integer poped out from the stack and getMin() which returns the min element from the stack.

// Expected Time Complexity : O(1) for all the 3 methods.
// Expected Auixilliary Space : O(1) for all the 3 methods.




int _stack :: getMin()
{
   //Your code here
   if(s.empty())
   {
       return -1;
   }
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if (s.empty())
   {
       
       return -1;
   }
   else{
       int y=s.top();
       if(y>=minEle)
       {
           s.pop();
           return y;
       }
       else if(y<minEle){
           int prevm=minEle;
           minEle=(2*minEle) - y;
           s.pop();
           return (y+minEle)/2;
       }
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       minEle=x;
       s.push(x);
   }
   else if(x>=minEle)
   {
       s.push(x);
   }
   else if(x<minEle){
       s.push((2*x) - minEle);
       minEle=x;
   }
}