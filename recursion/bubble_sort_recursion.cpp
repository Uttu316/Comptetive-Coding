//Utkarsh Gupta

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort_recursive(int arr[],int n){
    //base case
    if(n==1){
        return;
    }
    
    //find maxium an swap it
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    
    // recursive call
    bubblesort_recursive(arr,n-1);
}
void bubblesort_recursive2(int arr[],int  j,int n){
    //base case
    if(n==1){
        return;
    }
    
    // building sorted array from end
    if(j==n-1){
        return bubblesort_recursive2(arr,0,n-1);
    }
    
    //recursive call
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
   
    }
     bubblesort_recursive2(arr,j+1,n);
    
}
int main()
{
    int array1[]={5,4,3,2,1};
    int array2[]={10,9,8,7,6};
    
    bubblesort_recursive(array1,5);
    
    for(int i=0;i<5;i++){
        cout<<array1[i]<<" ";
    }
    
    bubblesort_recursive2(array2,0,5);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<array2[i]<<" ";
    }

    return 0;
}
