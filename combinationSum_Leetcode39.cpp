// Given an array of distinct integers candidates and a target integer target, 
// return a list of all unique combinations of candidates where the chosen numbers sum to target. 
// You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. 
// Two combinations are unique if the frequency of at least one of the chosen numbers is different.


#include<iostream>
#include<vector>
using namespace std;

void combinations(int idx , int target , vector<int> &candidates , vector<vector<int>> &ans , vector<int> &ds){
    if(idx == candidates.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if(candidates[idx] <= target){
        ds.push_back(candidates[idx]);
        combinations(idx , target-candidates[idx] ,candidates, ans , ds);
        ds.pop_back();
    }
    combinations(idx+1 , target , candidates , ans , ds);
}

vector<vector<int>> combinationSum(vector<int> candidates , int target){
    vector<vector<int>> ans;
    vector<int> ds;
    combinations(0 , target , candidates , ans , ds);
    return ans;
}

int main() {
    vector<int> candidates = {3,5,6,7,9};
    int target = 10;

    vector<vector<int>> result = combinationSum(candidates, target);

    cout << "Combinations that sum to " << target << ":\n";
    for (auto &comb : result) {
        cout << "[ ";
        for (int x : comb) cout << x << " ";
        cout << "]\n";
    }
    return 0;
}