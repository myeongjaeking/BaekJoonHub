//
//  main.cpp
//  BaekJoon_괄호
//
//  Created by 최명재 on 3/4/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<string>result;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt_l=0;
        int cnt_r=0;
        vector<char>stack;
        for(int j=0;j<s.length();j++){
            
            if(s[j]=='('){
                stack.push_back('(');
                cnt_l++;
                }
            else if(s[j]==')'){
                if(stack.empty()==0){
                    stack.pop_back();
                    cnt_r++;
                    
                }
                else{
                    cnt_r=-1;
                    break;
                }
            }
        }
        if(cnt_l!=cnt_r){
            result.push_back("NO");
        }
        else{
            result.push_back("YES");
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<"\n";
    }
}
