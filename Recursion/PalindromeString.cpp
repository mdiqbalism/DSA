#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){

    //base case 
    if(i > j){
        return true;
    }
    
    //condition check 
    if(str[i] != str[j]){

        return false;
        
    }else{
       
        return checkPalindrome(str,i++,j--);
    }

}

int main(){

    string name= "bookskoob";
    
    
    bool isPlindrome = checkPalindrome(name, 0, name.length()-1 );
   
    if(isPlindrome){

        cout << "Its a Palindrome " << endl;

    } else{

        cout << "Its not a Plindrome "<< endl;

    }

    return 0;
}