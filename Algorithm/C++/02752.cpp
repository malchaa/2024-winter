#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    d = min({a, b, c});
    f = max({a, b, c});
    e = a + b + c - d - f;
    cout << d << ' ' << e << ' ' << f;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[4];
  for(int i=0;i<3;i++){
    cin>>arr[i];
  }
  sort(arr, arr+3);
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
}
*/