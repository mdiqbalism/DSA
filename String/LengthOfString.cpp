#include<iostream>
using namespace std;
int getLength(char name[]){

    int count =0;
    for(int i=0; name[i] !='\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cin>> name;

    /*
     int i=0;
    while (true)
    {
        //loop ko chalana h jab tak null character na mile.

        if(name[i] == '\0'){
             cout <<"Lenght of string is "<< i;

             // length milte hi break kar dena h;
             break;
        }
        i++;
    }
    */
   
   cout<< "Length : "<< getLength(name)<<endl;

    return 0;
}