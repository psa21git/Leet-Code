#include <iostream>
#include <vector>
using namespace std;

//BruteForce Approach - this can be done using unordered maps which is much better.
int singleNumber(vector<int> &nums){
    int counter = 1;
    int n = nums.size();
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(nums[i] == nums[j]){
                counter++;
            }
        }
        if(counter == 2) return nums[i];
        counter = 1;  // Reset counter for the next number
    }
    return -1; // Return -1 if no single number found (error case)
}

//BITWISE
int singleNum(vector<int>& nums) {
        int singleNum = 0;
        //  XOR all numbers in the array
        // 4^1^2^2^1 returns unique one that is 4 here.
        for( int i=0; i < nums.size(); i++){
            cout << singleNum << " ^ " <<  nums[i] << " = ";
            singleNum = singleNum ^ nums[i];
            cout << singleNum << endl;
        }
        return singleNum;
    }

int main(){
    vector<int> arr = {4,1,2,2,1};
    cout << "The Single Number is : " << singleNum(arr) << endl;
    return 0;
}