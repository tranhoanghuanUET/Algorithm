#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int minn =1000;
int i=0,j=0;
int n;
int Try(int sum){
	if(minn > sum) minn=sum;
	if(i == j && j == n ){
      return minn;
    }
    Try(sum+a[i+1][j]);
	Try(sum+a[i][j+1]);
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	cout << Try(0);
}
