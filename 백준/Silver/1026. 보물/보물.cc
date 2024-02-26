//
//  main.cpp
//  BaekJoon_보물
//
//  Created by 최명재 on 2/26/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >>n;
    int arr_A[n];
    int arr_B[n];
    for(int i=0;i<n;i++){
        cin>>arr_A[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr_B[i];
    }
    sort(arr_A,arr_A+n);
    sort(arr_B,arr_B+n,greater<>());
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr_A[i]*arr_B[i];
    }
    cout<< sum;
}
