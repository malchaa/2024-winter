#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input, cond;
    cin >> input;
    for(int i = 1 ; i <= input; i++){
        cond = input - i;
        while(cond--){
            cout<<" ";
        }
        cond = i;
        while(cond--){
            cout<<"*";
        }
        cout<<"\n";
    }
}