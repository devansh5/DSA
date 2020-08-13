vector <int> calculateSpan(int price[], int n)
{
   // Your code here
   vector<int>v;
   stack<int>s;
   s.push(0);
   v.push_back(1);
   
   for(int i=1;i<n;i++)
   {
       while(!s.empty() && price[s.top()]<=price[i])
       {
           s.pop();
       }
       if(s.empty())
       {
           v.push_back(i+1);
       }
       else{
           int x=i-s.top();
           v.push_back(x);
       }
       s.push(i);
   }
   
   return v;
   
}