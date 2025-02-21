#include<iostream>
using namespace std;

bool checkPalindrome(string &str , int i , int j){

    if( i >= j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }

    return checkPalindrome(str , i+1 , j-1); 
}

int main(){
    string str = "abccba";

    if(checkPalindrome(str , 0 , str.length()-1)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not palindrome" << endl;
    }

    return 0;
}