#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 int missingNumber(vector<int>& nums,int val) {
    sort(nums.begin(),nums.end());
    // used to delete all occurances of a particular value
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
   //  vec.erase(std::remove(vec.begin(), vec.end(), valueToRemove), vec.end());
   return nums.size();

 }
 int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout << missingNumber(nums,val) << endl;
    return 0;
 }
