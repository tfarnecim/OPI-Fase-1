#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n,q;
	
	cin >> n >> q;
	
	int arr[n];
	
	for(int i=0;i<n;i++) cin >> arr[i];
	
	sort(arr,arr+n);
	
	int tira = 0;
	int pos = 0;
	
	for(int i=0;i<q;i++){
		
		while(pos < n && arr[pos]-tira==0){
			pos++;
		}
		
		if(pos==n){
			cout << 0 << endl;
		}else{
			cout << arr[pos]-tira << endl;
			tira += arr[pos]-tira;
		}
		
	}
	
	return 0;
}