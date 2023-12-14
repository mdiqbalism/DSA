// #include<iostream> 
// using namespace std;
// int fibonacciNumber(int n){
   
//    if(n == 1 || n == 2){

//        return 1;
//    }else{
       
//         int first = 1,second=1,next;
//        for (int i = 3; i <= n; ++i) {

//          next = first + second;
//          first = second;
//          second = next;
//        }
//         return next; 
//    }  
// }

// int main(){

//     int n;
//    cin>>n;


//    cout<<fibonacciNumber(n);

// }

// #include <iostream>

// using namespace std;

//     //Write your countBits function here
// int countBits(int n){
//     int cnt = 0;
 
//     while(n != 0){
//         if(n & 1){
//             cnt++;
//         }
    
//         n>>1;
//     }
//     return cnt;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout<<countBits(n);
//     return 0;
// }


#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int& S,int& E){
    int cnt=0;
    int i =S;
    while(S <= E){
        for(int j = 2;j<=i;j++){
            if(i%j == 0){
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}