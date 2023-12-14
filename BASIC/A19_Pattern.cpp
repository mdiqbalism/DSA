#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;
    while (i<n)
    {
        int j=1;
        // For star;
        while (j<=n-i)
        {
           cout<<"*";
           j++; 
        }

        // For space

        while (j<=i)
        {
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}