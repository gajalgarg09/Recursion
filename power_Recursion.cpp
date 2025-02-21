#include<iostream>
using namespace std;

int power(int num , int pow){
    if(pow == 0){
        return 1;
    }
    if( pow == 1){
        return num;
    }

    int ans = power(num , pow/2);

    if( pow % 2 == 0){
        return ans*ans;
    }
    else{
        return num*ans*ans;
    }
}

int main(){

    int num , pow;
    cout << "Enter the number : " << endl;
    cin >> num;
    cout << "Enter the power : " << endl;
    cin >> pow;

    int ans = power(num , pow);
    cout << ans << endl;

    return 0;
}