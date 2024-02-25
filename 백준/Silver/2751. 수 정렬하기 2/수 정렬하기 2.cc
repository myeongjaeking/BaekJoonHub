//
//  main.cpp
//  BaekJoon_수정렬하기2
//
//  Created by 최명재 on 2/25/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> num(n);
    
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    for(int i=0;i<n-1;){
        if(num[i]==num[i+1]){
            num.erase(num.begin()+i);
            n--;
        }
        else{
            i++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << num[i] << "\n";
    }
}
