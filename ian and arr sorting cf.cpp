#include<bits/stdc++.h>
using namespace std;
bool check(vector<long long> a,int n){
	for(int i=0;i<n;i++){
		if(a[i]<=a[i+1]){
		return true;	
	}else return false;
  }
}


int main(){
	int test;
	cin >> test;
	while(test--){
	int n;
	int ok=0;
	cin >> n;
    int a[n];
    vector<long long> st;
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	if(n==1){ 
		cout <<"YES" << endl;
		ok=1;
	}
	if(n==2 && a[0]-a[1] > 0){
	   ok=1;
    }
 	for(int i=1;i<n;i++){
		st.push_back(a[i-1]-a[i]);
	}
	if(check(st,n)==true){
		cout << "YES"<< endl;
	}else if(check(st,n)!=true || ok==1) cout << "NO" <<endl;
  }
}
