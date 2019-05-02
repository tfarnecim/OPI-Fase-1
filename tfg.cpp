#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;cin >> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++) cin >> arr[i];
	
	int POW = 1;
	int aux = n;

	while(aux!=0){
		
		bool achou = false;
		
		for(int i=0;i<POW;i++){
			
			bool ok = true;
			
			for(int j=0;j<(n/POW)-1;j++){
				
				if(arr[i*(n/POW)+j] > arr[i*(n/POW)+j+1]){
				    ok = false;
					break;	
				}
				
			}
			
			if(ok){
				achou = true;
				break;
			}
			
		}
		
		if(achou) break;
		
		POW*=2;
		aux/=2;
	}
	
	cout << n/POW << endl;
	
	return 0;
}