#include<iostream>
using namespace std;

void Print(int arr[],int x ,int index){
    
   //base case
    if (index == x - 1)
    {  
       cout<<arr[index]<<" ";
       return;
    }

    cout<<arr[index]<<" ";

    Print(arr,x,index +1);   
    
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int x = 5;
    int index = 0;

    Print(arr,x,index);

    return 0;
}