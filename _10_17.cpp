#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> num = {100, 21};

    // Reverse the vector
    reverse(num.begin(), num.end());

    // Print the reversed vector
    for (int n : num) {
        cout << n << " ";
    }

    return 0;
}

