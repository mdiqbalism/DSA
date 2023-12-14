#include<iostream>
#include<vector>
using namespace std;

void SelectioSort( vector<int> &arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        int MinIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])
                MinIndex = j ;
            
        }
        swap(arr[MinIndex], arr[i]);
        
    }
    
}

void PrintSelectionSort(vector<int> &arr, int n){

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    
}
int main(){

    vector<int> arr= {1,9,4,56,3};
    int n = 5;
    
    SelectioSort(arr,5);
    PrintSelectionSort(arr,5);

    return 0;
}