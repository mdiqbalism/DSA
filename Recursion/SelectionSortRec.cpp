#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){

    //Base case
    if(n == 0 || n == 1){
        return;
    }

    int minIndex = 0;

    for (int i = 0; i < n-1; i++)
    {
      
       if(arr[minIndex] > arr[i+1]){
            minIndex = i + 1;
       }
       
    }
    swap(arr[minIndex],arr[0]);
    
    SelectionSort(arr+1 ,n -1);
   
    
}
int main(){

    int arr[5] = {2,5,1,6,9};

    SelectionSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}