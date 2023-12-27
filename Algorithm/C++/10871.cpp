#include<iostream>
using namespace std;
int main(void){
    int N, X, cmp;
    int i = 0;
    cin >> N >> X;
    while(i < N){
        cin >> cmp;
        if(cmp < X) cout << cmp << " ";
        i++;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, x, t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    while(n--){
        cin >> t;
        if(t < x) cout << t << ' ';
    }
    
}
*/