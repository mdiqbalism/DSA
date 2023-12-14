#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int k ){

    //base case 
    //Element not found 
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    //Element found 
    if(arr[mid] == k){
        return true;
    }
    

    if(arr[mid] < k){

        return BinarySearch(arr, mid +1 , e ,k);

    }else{

        return BinarySearch(arr, s , mid-1,k);

    }
}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 16;

    int ans = BinarySearch(arr,0,5,16);
    if(ans){
        cout<<"Present ";
    }else{
        cout<<"Not present ";
    }
   

    return 0;
}