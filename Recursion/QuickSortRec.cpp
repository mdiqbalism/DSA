#include<iostream>
using namespace std;

int  Partion(int arr[],int s , int e){

    int pivot = arr[s];
    
    int cnt = 0;
    for(int i=s+1;i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // Place Pivot  at right position 
    int pivotIndex = s + cnt ;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part smbhal lete h 
    int i=s,j=e;

    while(i < pivotIndex && j > pivotIndex){

        while (arr[i] < pivot)
        {
           i++;
        }

        while (arr[j] > pivot )
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
           swap(arr[i++],arr[j--]);
        }
          
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int e){

    //Base case
    if(s >= e){
        return ;
    }
   
    //partition 
    int p = Partion (arr, s, e);

    //left part sort 
    QuickSort(arr, s,p-1);

    //right part sort 
    QuickSort(arr, p+1, e);

}

int main(){

    int arr[5] = {2,5,2,6,9};
    int n = 5;
    
    QuickSort(arr,0,n-1);

    for (int  i = 0; i < n; i++)
    {
      cout<< arr[i] << " ";
    }

    return 0;
}