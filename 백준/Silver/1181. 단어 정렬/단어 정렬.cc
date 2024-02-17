#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWords(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    int n;
    cin >> n;

    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    //compareWords 조건으로 정렬
    sort(str.begin(), str.end(), compareWords);
    
    //중복재거
    str.erase(unique(str.begin(), str.end()), str.end());

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }

    return 0;
}
