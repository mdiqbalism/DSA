#include<iostream>
using  namespace std;

int main(){
    
    int n,i,sum =0;
    cout<<"Enter a number"<< endl;
    cin>>n;
    i=1;
    
    /* 
    To print 1 to n ; 

    while (i<=n)
    {
      cout<< i <<endl;
      i++;  
    }
    */
    
    // Sum of all number from 1 to n;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    
    cout<< sum <<endl;

    return 0;
}