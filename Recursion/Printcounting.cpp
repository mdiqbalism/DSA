// #include<iostream>
// using namespace std;

// void print(int n){

//     //base case 
//     if(n == 0){
//         return ;
//     }
     
//     // this will print n n-1 n-2 n-3 n-4 .....so on;
//     cout << n <<" ";

//     //recurive relation
//     print(n-1);

//    // This will print 1 2 3 4 5 .....so on
//    cout << n <<" ";

// }

// int main(){

//     int n;
//     cin>>n;

//     print(n);

//     return 0;
// }

#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n){
    int i=0;
    int count = 0;
    while(n != 0){
        if(n & 1){
            count++;
        }
        n>>1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}