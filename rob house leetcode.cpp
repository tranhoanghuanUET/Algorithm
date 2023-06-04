#include<bits/stdc++.h>
using namespace std;

int dp[1000];
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		dp[i]=max(dp[i-1],dp[i-2]+a[i]);
	}
	cout << dp[n-1];
}
