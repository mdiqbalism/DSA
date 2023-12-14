/* Given na integer number n, return the difference between the product 
of its digits and the sum of its digits;
*/

#include<iostream>
using namespace std;

int main(){

    int n ,sum=0,product =1;;
    cout<<"Enter an integer number";
    cin>>n;

    while(n){
       
        int digit =n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
        
    }
     
     int difference = product-sum;
     cout<<difference;
    
}