//
//  main.cpp
//  BaekJoon_분수찾기
//
//  Created by 최명재 on 2/17/24.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int denominator; //분모
    int numerator; //분자
    int n;
    int a=1;
    cin>>numerator>>denominator>>n;
    double result= numerator%denominator;
    //소수부분을 10의 n승 만큼 곱하기 위해
    for(int i=0;i<n;i++){
        numerator = (numerator%denominator)*10;
        result = numerator/denominator;
    }
    
    cout<<result;
    return 0;
}
