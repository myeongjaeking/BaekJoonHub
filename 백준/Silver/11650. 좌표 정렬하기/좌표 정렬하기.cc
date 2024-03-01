//
//  main.cpp
//  BaekJoon_좌표정렬하기
//
//  Created by 최명재 on 2/29/24.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<pair<int, int>> p;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p.push_back({ x, y });
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++) {
        cout << p[i].first << ' ' << p[i].second << '\n';
    }
    return 0;
}
