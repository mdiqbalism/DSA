#include<iostream>
using namespace std;

void LowerToUpp(string& name,int i,int size){

    //base case
    if(i == size){
        return;
    }

   name[i] = 'A' + name[i] - 'a';

   //recursive call 
   LowerToUpp(name,i + 1,size);
    
}

int main(){

    string name  = "iqbal";

    int i = 0;
    int size = 5;
    cout <<name<<endl;

    LowerToUpp(name,i,size);

    cout<<name<<endl;


    return 0;
}