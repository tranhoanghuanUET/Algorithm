#include<bits/stdc++.h>
using namespace std;

vector<int> vt;
void Try(int n){
	vt.push_back(n);
	if(n%3!=0){
		return ;
	}
	else {
	Try(n-n/3);
	Try(n- (2*n)/3);
    }
}




int main(){
	int n;
	cin >> n;
	Try(n);
	for(auto x:vt){
		cout << x << " ";
	}
}
