#include<iostream>
using namespace std;

int descendingPrint(int n){
    if(n == 0){
        return 0;
    }
    cout << n << endl;
    return descendingPrint(n-1);
}

int ascendingPrint(int n){
    if(n == 0){
        return 0;
    }
    return ascendingPrint(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    ascendingPrint(n);
    descendingPrint(n);
    return 0;
}
