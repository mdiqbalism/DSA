#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n){

     
    for(int i=0;i<n;i++){

        for(int j=0; j<n-i-1;j++){
            if (arr[j]> arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                
            }
            
        }
    }
   


}

int PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main(){
    int arr[4] = {6,3,0,5};

    PrintArray(arr,4);
    BubbleSort(arr,4);
    cout<<endl<<"Sorted array "<<endl;
    PrintArray(arr,4);

}