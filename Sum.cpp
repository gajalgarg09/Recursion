#include<iostream>
using namespace std;

int sum(int n){
    if(n <= 0){
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    int ans = sum(n);
    cout << ans << endl;
    
    return 0;
}
