#include<iostream>
#include<vector>
using namespace std;

int Movezero(vector<int> & arr){

    int k=0;
    int i=0;
    while (i<arr.size())
    {
        if (arr[i] != 0)
        {
           swap(arr[i], arr[k]);
            k++;
        }
        i++;
    }
    
}

int PrintArray(vector<int>& arr){

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main(){
    vector<int>arr={0,1,0,3,12};

    Movezero(arr);
    PrintArray(arr);
}