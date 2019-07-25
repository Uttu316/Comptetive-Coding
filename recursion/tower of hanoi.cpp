

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void tower_of_Hanoi(int n, char start, char end, char aux){
    //base case
    if(n==1){ 
        cout << "Move disk 1 from rod " << start <<" to " << end<<endl;
        return;  
    }
    tower_of_Hanoi(n-1, start, aux, end);
     cout << "Move disk " << n << " from rod " << start <<" to " << end << endl;
    tower_of_Hanoi(n-1, aux, end, start);
}

//main

int main()
{
    int n = 3;
    tower_of_Hanoi(n,'A','C','B');
    cout<<pow(2,n)-1<<endl;

    return 0;
}
