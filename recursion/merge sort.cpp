#include <iostream>

using namespace std;
void merge(int arr[], int start, int mid, int end) 
{ 
    int i, j, k; 
    int n1 = mid - start + 1; 
    int n2 =  end - mid; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[start + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[mid + 1+ j]; 
  
    i = 0; 
    j = 0;  
    k = start;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergesort(int *arr,int start, int end){
    //base case
    if(start>=end){
        return;
    }
    
    //sepration point
    int mid = (start+end)/2;
    
    //reccursive calls 
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    
    //merge two subarrays
    merge(arr,start,mid,end);
}
int main()
{
    int n=6;
    int arr[] ={6,5,4,3,2,1};
    mergesort(arr,0,n-1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
