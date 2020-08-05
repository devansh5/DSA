#include <bits/stdc++.h>

using namespace std;


void reverse(string str)
{

    if(str.size()==0)
    {
        return;
    }
    reverse(str.substr(1));

    cout<<str[0];
    

}




int main()
{
    string str="hello my name is devansh";


    reverse(str);



    return 0;

}