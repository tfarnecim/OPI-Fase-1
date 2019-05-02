#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;cin >> n;
	
	int l[n],r[n];
	
	for(int i=0;i<n;i++) cin >> l[i] >> r[i];
	
	int k;
	
	cin >> k;k--;
	
	int i = 0;
	
	while(i < n && r[i]<=k){
		i++;
	}
	
	cout << n-i << endl;
	
	return 0;
}
