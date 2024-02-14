#include <iostream>
using namespace std;

int main() {
    int arr[3];
    int max = 0;

    for (int i = 0; i < 3; i++) {
        int input;
        cin >> input;
        if (max <= input) {
            max = input;
        }
        arr[i] = input;
    }

    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        cout << 10000 + arr[0] * 1000;
    } else if (arr[0] == arr[1] || arr[0] == arr[2]) {
        cout << 1000 + arr[0] * 100;
    } else if (arr[1] == arr[2]) {
        cout << 1000 + arr[1] * 100;
    } else {
        cout << max * 100;
    }

    return 0;
}
