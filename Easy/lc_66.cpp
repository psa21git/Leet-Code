#include <vector>
#include <iostream>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    // int n = digits.size();
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);
    for (int digit : result) {
        cout << digit << " ";
    }
    return 0;
}
