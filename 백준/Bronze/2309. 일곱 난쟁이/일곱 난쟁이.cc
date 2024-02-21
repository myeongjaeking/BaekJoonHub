#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    int sum = 0;
    
    
    for (int i = 0; i < 9; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
        sum += arr[i];
    }

    int removed1, removed2;

   
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                removed1 = arr[i];
                removed2 = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i] != removed1 && arr[i] != removed2)
            cout << arr[i] << endl;
    }

    return 0;
}
