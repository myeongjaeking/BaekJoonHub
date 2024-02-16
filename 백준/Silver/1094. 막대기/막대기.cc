//
//  main.cpp
//  BaekJoon_막대기
//
//  Created by 최명재 on 2/16/24.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int input;
    cin >> input;

    int result = 0;
    
    while (input>0) {
        if (input % 2 == 1) {
            result++;
        }
        input /= 2;
    }

    cout << result;
}
