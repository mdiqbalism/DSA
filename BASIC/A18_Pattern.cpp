#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i =1;
    while (i<=n)
    {
        int j=1;
        // for space 
        while (j<=n-i)
        {
           cout << " ";
           j++; 
        }
      
       // For star;

        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        
        cout<<endl;
        i++;
        
    }
    

    return 0;
}