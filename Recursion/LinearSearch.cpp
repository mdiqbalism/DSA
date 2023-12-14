#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size , int key){

    //Base case 
    if(size == 0){
        return false;
    }

    if( arr[0] == key){
        return true;
    }else{
         bool ans = LinearSearch(arr+1,size-1,key);
         return ans ;
    }

   

}

int main(){
    
    int arr[5]= {3,5,1,2,6};
    int size = 5;
    int key = 2;

    int ans = LinearSearch(arr,size,key);

    if(ans){

        cout<<"Key found ";

    }else{

        cout<< "Key not found ";

    }


    return 0;
}