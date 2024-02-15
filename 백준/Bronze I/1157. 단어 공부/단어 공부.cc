//
//  main.cpp
//  BaekJoon_단어공부
//
//  Created by 최명재 on 2/15/24.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    int arr[26]={0};
    int max=0;
    int index=0;
    cin>>str;
    
    for(int i=0;i<str.length();i++){
        if((int)str[i]<97){
            arr[(int)str[i]-65]++;
        }
        else{
            arr[(int)str[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    int cnt=0;
    char result='?';
    for(int i=0;i<26;i++){
        if(max==arr[i]){
            cnt++;
            if(cnt>1){
                result = '?';
                break;}
        }
        result = (char)(index+65);
    }
    cout<< result;
}
