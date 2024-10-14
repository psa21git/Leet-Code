#include <vector>
#include <iostream>

using namespace std;

 int missingNumber(vector<int>& nums) {
    int total = nums.size() * (nums.size() + 1) / 2;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return total - sum;
 }
 int main(){
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums) << endl;
    return 0;
 }
