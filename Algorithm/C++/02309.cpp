#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input, idx1, idx2, sum = 0; 
    int arr[9];
    for(int i = 0 ; i < 9 ; i++){
        cin >> input;
        sum += input;
        arr[i] = input;
    }
    sort(arr, arr+9);
    sum -= 100;
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++)
        {
            if(arr[i] + arr[j] == sum){
                idx1 = i;
                idx2 = j;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        if(i != idx1 && i != idx2)
            cout << arr[i] << "\n";
    }
    return 0;
}

/*
int num[9], result[7];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 0; i < 9; i++) cin >> num[i];
    
  // 9명 중 2명을 뺀 모든 조합 고려
  for(int a = 0; a < 8; a++) {
    int total = 0;
        
    for(int b = a + 1; b < 9; b++) {
      total = 0;
            
      // 나머지 7명 저장
      for(int c = 0, i = 0; c < 9; c++) if(c != a && c != b) result[i++] = num[c];
      for(int i = 0; i < 7; i++) total += result[i];
            
      // 7명 키의 합이 100인 경우
      if(total == 100) break;
    }
    if(total == 100) break;
  }
    
  // 정렬 후 출력
  sort(result, result + 7);
  for(int i = 0; i < 7; i++) cout << result[i] << "\n";
}
*/