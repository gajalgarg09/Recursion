// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing 
// all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string checkAlphanumeric(string s){
        string  result;
        for(char ch : s){
            if(isalnum(ch)){
                result += tolower(ch);
            }
        }
        return result;
    }

    bool palind(string &s , int i){
        int n = s.length();
        if(i >= n/2) return true;

        if(s[i] != s[n-i-1]) return false;
        return palind(s , i+1);
    }

    bool isPalindrome(string s) {
        string s1 = checkAlphanumeric(s);
        return palind(s1 , 0);
    }
};