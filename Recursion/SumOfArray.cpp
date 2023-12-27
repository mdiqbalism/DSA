#include<iostream>
using namespace std;

int SumOfArray(int arr[],int x ,int index){
    
    //base case
    if (index == x)
    {  
       return 0;
    }

    return arr[index] + SumOfArray(arr,x,index + 1);
    
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int x = 5;
    int index = 0;

    cout << SumOfArray(arr,x,index);
    return 0;
}