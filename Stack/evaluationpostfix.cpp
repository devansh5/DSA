#include<bits/stdc++.h>
using namespace std;

// we are subtracting '0' for ascii value so that the characters or digits asscci value  subtracted from zero to get the number itself

// '1' ascii value -49 '0 ' ascii value - 48
// 49-48=1 is the ascii value

int evaluatePostfix(string &str){
    // Your code here
    stack<int>s;
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i])){
            
            s.push(str[i]-'0');
        }
        else{
            int val1=s.top();
            s.pop();
            int val2=s.top();
            s.pop();
            switch(str[i]) 
            { 
                case '*': s.push(val2 * val1); break; 
                case '/': s.push(val2/val1); break; 
                case '+': s.push(val2 + val1); break; 
                case '-': s.push(val2 - val1); break; 
                
               
            } 
        }
    }
    return s.top();
}

// if multiple digits are there then 
// we check till the numbers are allowed
// if(isdigit(str[i])){
//     int num=0;

//     while(isdigit(str[i]){
//         num=num*10+int(str[i]-'0')
// }