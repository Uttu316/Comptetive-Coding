

#include <iostream>

using namespace std;
void mergesort(int *arr,int start, int end){
    if(start>=end){
        return;
    }
    
    int mid = (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,start);
    merge()
}
int main()
{
    int arr[] ={6,5,4,3,2,1};
    mergesort(arr,0,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
