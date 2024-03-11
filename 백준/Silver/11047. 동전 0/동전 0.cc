//
//  main.cpp
//  BaekJoon_동전0
//
//  Created by 최명재 on 3/11/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int money;
    
    cin>>n>>money;
    int arr[n];
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr[i]=input;
    }
    int cnt=0;
    
    while(money!=0){
        if(arr[n-1]>money){
            
            n=n-1;
        }
        else{
            
            money=money-arr[n-1];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
