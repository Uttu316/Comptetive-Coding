
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int start, int n){
    int i=start-1;
    
    for(int j=start;j<n;j++){
        if(arr[j]<=arr[n]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[n]);
    return (i+1);
}

void quick_sort(int *arr,int start ,int n){
    if(start>=n){
        return;
    }
    int pivot = partition(arr,start,n);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot,n);
}
int main()
{
    int n=6;
    int arr[] = {6,5,4,3,2,1};
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
