#include <bits/stdc++.h>
using namespace std;

int n, value, idx; // 전역변수 초기값은 0이래.

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 1; i < 10; i++){
    cin >> n;
    if(value < n){
      value = n;
      idx = i;
    }
  }
  cout << value << "\n" << idx;
}