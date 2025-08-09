#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &arr) {
    if (arr.empty()) return; // Handle empty array
    int temp = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    leftRotate(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
