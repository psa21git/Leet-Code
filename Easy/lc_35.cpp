#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>&nums,int target){
    int index = 0;
    for(int num: nums){
        if(num <  target){
            index++;
        }
        if(num == target) return index;
    }
    return index;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;
    cout << searchInsert(nums,target) << endl;
    return 0;
}