//
//  main.cpp
//  커트라인2
//
//  Created by 최명재 on 9/13/25.
//

#include <iostream>

using namespace std;
int n, m;
char arr[50][50];

int a(int x, int y, char color) {
    int cnt = 0;
    for (int i=x;i<x+8; i++) {
        for(int j=y;j<y+8;j++) {
            char bOrw;
            if((i+j)%2==0) {
                bOrw = color;
            }
            else{
                if(color == 'W'){
                    bOrw = 'B';
                } else{
                    bOrw = 'W';
                }
            }
            if(arr[i][j] != bOrw){
                cnt++;
            }
        }
    }
    
    return cnt;
}

int main() {
    cin >> n >> m;
   
    for (int i = 0; i < n; i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    if(n<8 || n>50 || m<8 || m>50 ) {
        return 0;
    }

    int result = 64;
    for (int i = 0; i <= n - 8; i++) {
            for (int j = 0; j <= m - 8; j++) {
                int cntW = a(i, j, 'W');
                int cntB = a(i, j, 'B');
                result = min(cntW,result);
                result = min(cntB,result);
        }
    }

    cout << result;
    

    return 0;
}
