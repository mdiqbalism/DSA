#include<iostream>
using namespace std;

int MiniValue(int arr[],int size,int index){

    //base case 
    if(index == size - 1){
        return arr[index];
    }
     
   return  max(arr[index],MiniValue(arr,size,index + 1));

}

int main(){
    int arr[5] = {7,2,3,1,6};
    int size = 5;
    int index = 0;

    cout <<MiniValue(arr,size,index);
    return 0;
}