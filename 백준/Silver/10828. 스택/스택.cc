//
//  main.cpp
//  BaekJoon_Stack
//
//  Created by 최명재 on 3/9/24.
//

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    stack<int> stk; 
    
    for(int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s;
        if(s == "push") {
            cin >> num;
            stk.push(num);
        }
        else if(s == "top") {
            if(stk.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << stk.top() << "\n";
            }
        }
        else if(s == "pop") {
            if(stk.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if(s == "empty") {
            cout << stk.empty() << "\n";
        }
        else if(s == "size") {
            cout << stk.size() << "\n";
        }
    }
}
