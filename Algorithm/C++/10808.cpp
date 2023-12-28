#include<bits/stdc++.h>
using namespace std;
int alphabet[26];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;
    for(auto c : S)
        alphabet[c - 'a']++;
    for(int i = 0; i < 26; i++)
    cout << alphabet[i] << ' ';
    return 0;
}