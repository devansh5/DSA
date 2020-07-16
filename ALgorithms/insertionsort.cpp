// Insertion sort is effic3ient algorithm to sort the small no of arrays.
// Insertion SOrt requires the O(n*^2)


#include<iostream>

using namespace std;

//Using two for loops 
void insertionsort(int arr[],int n)
{

	for(int i=1;i<n;i++)
	{

		for(int j=0;j<i;j++)
		{

			if(arr[j]<arr[i])
			{

				int key=arr[i];
				arr[i]=arr[j];
				arr[j]=key;

			}

		}

	
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
// Using for and while loops

// int insertionsort(int arr[],int n){
// 	for(int i=1;i<n;i++){
// 		int key=arr[i];
// 		j=i-1;
// 		while(j>=0 && arr[j]>key){
// 			arr[j+1]=arr[j];
// 			j=j-1;
// 		}
// 		arr[j+1]=key;
// 	}

// } 

int main()
{

	int arr[]={31,49,59,26,41,58};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	return 0; 
}
