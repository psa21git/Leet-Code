#include <iostream>
#include <vector>
using namespace std;
#include<unordered_map>
vector<int> getSneakyNumbers(vector<int>& nums) {
    vector <int> sneaky;
    unordered_map<int,int> check;
    for(auto num: nums){
        check[num]++;
    }
    for(auto map:check){
        if(map.second==2){
            sneaky.push_back(map.first);
        }
    }
    return sneaky;
}

int main(){

    return 0;
}