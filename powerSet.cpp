// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

#include<iostream>
#include<vector>
using namespace std;

// Method - 1
// void print(int idx , vector<int> &ds , int arr[] , int n){

//     // base case when we are printing the subsequences 
//     if(idx == n){
//         for(int it : ds){
//             cout << it << " ";
//         }
//         cout << endl;
//         return;
//     }

//     // when we are taking the element
//     ds.push_back(arr[idx]);
//     print(idx+1 , ds , arr , n);
//     ds.pop_back();

//     // when we are not taking the element
//     print(idx +1 , ds , arr , n);
// }

// int main(){

//     int arr[] = {3,1,2};
//     int n = 3;
//     vector<int> ds;
//     print(0 , ds , arr , 3);
// }


// M-2
class Solution {
public:
    void solve (vector<int> &nums , vector<int> output , int idx , vector<vector<int>> &ans){
        if(idx == nums.size()){
            ans.push_back(output);
            return;
        }

        solve(nums , output , idx+1 , ans);

        int element = nums[idx];
        output.push_back(element);
        solve(nums , output , idx+1 , ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int idx = 0;
        solve(nums , output , idx , ans);
        return ans;
        
    }
};
