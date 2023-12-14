#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first= new int[len1];
    int *second = new int[len2];

    //copy values 
    int mainArrayIndex =  s;
    for(int i=0; i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid +1;
    for(int i=0; i <len1; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //Merge 2 sort array
    int index1 =0;
    int index2 = 0;
    




}

void mergeSort(int arr[], int s , int e){

    //base case 
    if(s >= e){
        return;
    }

    int mid = s + (e- s)/2;

    //left part sort 
    mergeSort(arr, s,mid);

    //right part sort
    mergeSort(arr, mid+1, e);

    // merge both array
    merge(arr, s , e);

}

int main(){

    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr , 0 ,n-1);

    for(int i=0; i < n ; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}