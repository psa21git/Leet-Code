#include <iostream>
#include <vector>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int sum=0;
    for(auto num:nums){
        if(num%3!=0) sum++;
    }        
    return sum;
}


int main(){

    return 0;    
}