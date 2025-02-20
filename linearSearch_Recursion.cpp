#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size, int key){

    if( size == 0 )
        return false;

    if( arr[0] == key){
        return true;
    }

    else{
        bool remainingPart = linearSearch(arr+1 , size-1 , key);
        return remainingPart;
    }

}

int main(){

    int arr[5] = {1,33,6,79,7};
    int size = 5;
    int key = 7;

    bool ans = linearSearch( arr , size , key);

    if(ans){
        cout << "element found" << endl;
    }

    else{
        cout << "element not found" << endl;
    }

    return 0;
}