#include<iostream>
using namespace std;


int Sum(int arr[],int size){

    //Base case 
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }
    
    int sum = arr[0] +  Sum(arr+1,size-1);
    
    return sum;

}

int main(){

    int arr[5] = {3,2,5,1,6};
    int size = 5;

    int ans = Sum(arr,size);
    cout<<"Sum of array is "<<ans;

    return 0;
}