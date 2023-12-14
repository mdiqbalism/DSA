#include<iostream>
using namespace std;

void Print(int *p){

    cout<< *p << endl;
}

void update(int *p){
    //p = p +1;
   // cout<<"Inside "<<p <<endl;
    *p = *p +1;
}
int main(){
    
    int value = 5;
    int *p = &value;

   // Print(p);

   cout<< "Before " << *p <<endl;
   update(p);
    cout<< "After " << *p <<endl;

    return 0;
}