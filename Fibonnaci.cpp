// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

#include<iostream>
using namespace std;

// Method - 1 Recursion
int fib(int n){
    if( n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

// Method - 2 for loop
int fib2(int n){
    if( n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }

    int prev1 = 1;
    int prev2 = 0;

    for(int i =2; i<=n; i++){
        int curr = prev1+ prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main(){
    int n;
    cout << "Enter the position for which you need the Fibonnaci : ";
    cin >> n;

    int ans = fib(n);
    cout << ans << endl;

    return 0;
}