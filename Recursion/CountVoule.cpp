#include<iostream>
using namespace std;

int countVoul(string s,int index,int size){

    //base case 
    if(index == size ){
        return 0;
    }

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
       return 1 + countVoul(s,index + 1,size);
    }else
    {
       return countVoul(s,index + 1,size);
    }
    
    
}

int main(){

    string s = "iqbal";

    int index = 0;
    int size = 5;

    cout <<"Count of voule is " << countVoul(s,index,size);

    return 0;
}