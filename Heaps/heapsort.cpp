


void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} 
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int left=(2*i+1);
      int right=(2*i+2);
      if(left<n&&arr[left]>arr[largest])
      {
          largest=left;
      }
      if(right<n&&arr[right]>arr[largest])
      {
          largest=right;
      }
      if(largest!=i)
      {
          swap(arr[largest],arr[i]);
          
          heapify(arr,n,largest);
      }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    int size=(n-2)/2;
    for(int i=size;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}