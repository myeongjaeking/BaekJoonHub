//
//  main.cpp
//  BaekJoon_ATM
//
//  Created by 최명재 on 3/10/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<int>vec;
    int arr[n];
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    arr[0]=vec[0];
    int sum=0;
    for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+vec[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
