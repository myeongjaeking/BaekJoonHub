#include <iostream>
#include <vector>

using namespace std;

int dp(int N,int M){
    
    if(N==M)return 1;
    int result=0;
    int arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            arr[i][j] = 0;
        }
    }
    int M_setting=1;
    for(int i=0;i<M;i++){
        arr[0][i]=M_setting++;
    }
    for(int i=1;i<N;i++){
        for(int j=1;j<M;j++){
            arr[i][j] = arr[i-1][j-1]+arr[i][j-1];
        }
    }
    return arr[N-1][M-1];
}


int main() {
    int T;
    cin>>T;
    int arr[T][2];
    for(int i=0;i<T;i++){
        int N,M;
        cin>>N>>M;
        arr[i][0]=N;
        arr[i][1]=M;
    }
    for(int i=0;i<T;i++){
        cout<<dp(arr[i][0],arr[i][1])<<endl;
    }
}
