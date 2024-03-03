//
//  main.cpp
//  BaekJoon_한수
//
//  Created by 최명재 on 3/3/24.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int cnt;
    cin >> n;
    
    if (n < 100) {
        cout << n;
    } else {
        cnt = 99;
        for (int i = 100; i <= n; i++) {
            if ((i / 100 - (i / 10) % 10) == (i / 10) % 10 - i % 10) {
                cnt++;
            }
        }
        cout << cnt;
    }

    return 0;
}

