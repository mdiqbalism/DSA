#include <iostream>
using namespace std;

int main(){
    
    char ch='n';
    cin>>ch;

    if (ch>='a'&& ch <='z' )
    {
        cout<<"lower case" << endl;
    }else if(ch>='A' && ch <='Z'){
        cout<<"Upper case" <<endl;
    }else{
        cout<<"Number"<<endl;
    }
    

    return 0;
}