#include<iostream>
#include<vector>
using namespace std;

int CountPrime(int n){

    int cnt=0;
    vector<bool> prime(n+1 , true);

    prime[0] = prime[1]=false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
        

        for (int j = i*2; j < n; j=j+i)
        {
            prime[j]= 0 ;
        }
        
        }

    }
    
    return cnt;
}
int main(){

    int n ;
    cout<<"Enter Number"<<endl;
    cin>>n;

    cout<<"Number of prime number "<< CountPrime(n);

    return 0;
}

/*

COMPLEXITY == O(n*log(logn));

*/