#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	
	cin >> s;
	
	if(s.length() <= 10){
		cout << s << endl;
		return 0;
	}
	
	cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
	
	return 0;
}