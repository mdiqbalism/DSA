#include<iostream>
using namespace std;

int power(int a,int b){

    //Base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    //Recursive call
    int ans = power(a,b/2);

    if (b & 1)
    {
       return a * ans * ans;

    }else{

        return ans * ans;
    }
    
   
}

int main(){

    int n,x;
    cin>>n>>x;

    int ans = power(n,x);

    cout<<" Answer is " << ans  <<endl;

    return 0 ;
}