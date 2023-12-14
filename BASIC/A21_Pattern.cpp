#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1,count=1;
        // For Space 
        while (j<=n-i)
        {
            cout<<" ";
            j++;
        }

        //For number

         while (j<=n)
         {
            cout<<count;
            count++;
            j++;
         }
         
        --count;
         int k =n;
         while (j<n+i)
         {
            --count;
            cout<<count;
            
            j++;
         }
         
         


        cout<<endl;
        i++;
        



        
    }
    
}