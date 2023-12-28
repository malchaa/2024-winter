#include<bits/stdc++.h>
using namespace std;
int arr[10], M;
int main(void){
    int N;
    cin >> N;
    while(N>0){
        arr[N % 10]++;
        N /= 10;
    }
    arr[6] += arr[9];
    if(arr[6] & 1){
        arr[6] = (arr[6]+1)/2;
    }else{
        arr[6] /= 2;
    }
    for(int i = 0; i < 9; i++){
        if(M < arr[i]) M = arr[i];
    }
    cout << M;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, a[10] = {}, ans = 0;
  cin >> N;
  
  // 자리수 추출
  while(N){
    a[N%10]++;
    N /= 10;
  }

  for(int i = 0; i < 10; i++){
    if(i == 6 || i == 9) continue;
    ans = max(ans, a[i]);
  }
  // (a[6]+a[9])/2를 올림한 값이 6, 9에 대한 필요한 세트의 수이므로 (a[6]+a[9]+1)/2을 계산
  ans = max(ans, (a[6]+a[9]+1)/2);
  cout << ans;
}
*/