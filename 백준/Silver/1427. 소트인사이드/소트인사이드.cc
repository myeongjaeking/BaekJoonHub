//
//  main.cpp
//  BaekJoon_소트인사이드
//
//  Created by 최명재 on 2/22/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    reverse(input.begin(),input.end());
    cout<<input;
}
