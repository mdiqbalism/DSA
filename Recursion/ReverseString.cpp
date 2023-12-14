#include<iostream>
using namespace std;

void reverseString(string& str, int i, int j){

    // Base case
    if (i>j)
    {
        return;
    }
    swap(str[i++],str[j--]);

    //Recursive call;
    reverseString(str,i,j);

    
    
}
int main(){

    string name = "iqbal";

    reverseString(name,0,name.length()-1);

    cout<< name <<endl;

    return 0;
}