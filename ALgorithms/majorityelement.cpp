// Element is the majority element if the any element occur more than n/2 times
// moore voting algorithm
#include<iostream>

using namespace std;



int majorityelement(int arr[],int n)
{

    int count=1,res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
    
    }
    if(count>n/2)
        return arr[res];
    else if(count<=n/2)
        return res=-1;

}

int main()

{
    int n,arr[n];
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<majorityelement(arr,n)<<endl;




    return 0;
}
