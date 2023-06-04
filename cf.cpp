#include<bits/stdc++.h>
using namespace std;
int n;
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int test;
    cin >> test;
    while(test--){
    cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
     int x;
     cin >> x;
    if(x==0) cnt++;
    }
    if(2*cnt-n >= 0  && 2*cnt-n <= 1) cout << "0" << endl;
    else cout << "1" << endl;
}
}
