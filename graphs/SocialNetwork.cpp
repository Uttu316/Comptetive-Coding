/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int c = 0;

void
init (int **arr)
{
  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
	{

	  arr[i][j] = 0;
	}

    }
}

void
print (int **arr)
{
for(int i=1;i<=10;i++){
    cout<<i<<" ";
}
cout<<endl;
  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
	{
	  c += arr[i][j];
	  cout << arr[i][j] << " ";
	}
      cout << endl;
    }
}

int
main ()
{
  int t;
  int **arr;
  arr = new int *[10];
  for (int i = 0; i < 10; i++)
    arr[i]= new int[10];
  init (arr);
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int v;
    for(int i=1;i<n;i++){
      cin>>v;  
      arr[i][v-1]=1;
      
    }
  }
  print(arr);
  return 0;
}
