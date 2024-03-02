//
//  main.cpp
//  BaekJoon_설탕배달
//
//  Created by 최명재 on 3/2/24.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int dp[5001]={0,};
    
    for(int i=1;i<=n/3;i++){
        for(int j=0;j<=i;j++){
            if((3*i+2*j<=5000)&&dp[3*i+2*j]==0){
                dp[3*i+2*j]=i;
            }
            else{
                continue;
            }
        }
    }
    cout<<(dp[n]==0?-1:dp[n]);
    return 0;
}
