#include<bits/stdc++.h>
using namespace std;

int n;
int a[10000];
vector<int> vt;
void Solve(int jump,int index){
	vt.push_back(index);
	if(index==n-1){
		return;
	}
	for(int i=1;i<=a[index];i++){
		Solve(a[index],index+i);
	}
}



int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	Solve(0,0);
}
