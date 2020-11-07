#include <bits/stdc++.h> 
using namespace std;
const long long MAX_SIZE = 4000000; 
vector<long long>primes;
void getPrimes(long long n = MAX_SIZE){

    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long long p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (long long i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (long long p=2; p<=n; p++) 
       if (prime[p]) 
          primes.push_back(p);
} 
 
int main()
{
    getPrimes(); 
  
   long long  t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long  arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long b[n];
        for(long long i=0;i<n;i++){
           b[i] = primes[i];
        }
        for(long long i=0;i<n;i++){
           b[i] = max(primes[i],primes[arr[i]-1]);
        }
        for(long long i=0;i<n;i++){
           cout<<b[i]<<" "; 
        }
        cout<<endl;
        
        
    }
   
   
   
}
