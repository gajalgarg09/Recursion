// Given an array arr[] of length n and a number target, 
// the task is to find all the subsequences of the array with sum of its elements equal to target.

#include<iostream>
#include<vector>
using namespace std;

void subsequenceSum(int idx , vector<int> subsequences ,vector<int> &arr, int varSum , int target){
    int n = arr.size();
    if(idx == n){
        if(varSum == target){
            for(int it : subsequences){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    subsequences.push_back(arr[idx]);
    varSum += arr[idx];
    subsequenceSum(idx+1 , subsequences , arr , varSum , target);
    subsequences.pop_back();
    varSum -= arr[idx];
    subsequenceSum(idx+1 , subsequences , arr , varSum , target);
}

int main(){

    vector<int> subsequences;
    vector<int> arr = {1,2,3,4,5,6};
    int target = 6;
    subsequenceSum(0 , subsequences , arr , 0 , target);
    return 0;
}