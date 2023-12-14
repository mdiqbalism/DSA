#include <iostream>
using namespace std;
 

void insertionSort(int arr[], int n)
{
   for (int  i = 1; i < n; i++)
   {
        int dummy =arr[i];
        int j=i-1;
        while (j>=0)
        {
            if (arr[j]>dummy)
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }

      arr[j+1] = dummy;  
        
   }
   
   
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = 5;
 
    insertionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}


