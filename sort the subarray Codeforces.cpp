#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<set>
#include<sstream>
 
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	
	int l = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != b[i])
		{
			l = i+1;
			break;
		}
		
	}
	int r = 0;
	for (int j = n-1; j >-1; j--){
		if (a[j] != b[j])
		{
			r = j+1;
			break;
		}
		
	}
	
	for (int i = l-2; i >= 0; i--){
		if (b[i] <= b[i+1]){
			l--;
		}
		else {
			break;
		}
	}
	
	for (int j = r; j < n; j++){
		if (b[j] >= b[j-1]){
			r++;
		}
		else {
			break;
		}
	}
	
	cout << l << " " << r <<endl;
}
}
