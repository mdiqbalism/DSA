#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;

    while (i<n)
    {
       int j=0;
       
       // for space ;

       while (j<i)
       {
        cout<<" ";
        j++;
       }
       
       //for star;

       hile (j<=n-i)
       {
          cout <<"*";
          j++;
       }
       cout<<endl;
       i++;

       
    }

   
    

    return 0;
}
