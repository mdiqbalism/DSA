#include<iostream>
using namespace std;

// function for reverse string ;
void reverse(char name[],int n){

    int s =0;
    int e = n-1;

    while(s < e){
        swap(name[s++],name[e--]);
    }

}

// Function for length of string .
int getLength(char name[]){

    int count =0;
    for(int i=0; name[i] !='\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cin>>name;

    cout<<"Your name is ";
    cout << name <<endl;
    int len = getLength(name);
    cout << "Length:" << len <<endl;
    reverse(name,len);
    cout<<"Your name is " ;
    cout << name <<endl;

   

    return 0;
}