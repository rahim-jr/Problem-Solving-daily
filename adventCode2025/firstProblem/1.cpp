#include <bits/stdc++.h> 
#define endl '\n'
using namespace std ; 

int main() { 
	freopen("input" , "r", stdin) ;
	
	int start = 50 , ans = 0 ;
	
	string s ; 
	
	while(getline(cin,s)) {
		if (s.empty()) continue;

		char first = s[0] ;
		int value = stoi(s.substr(1)) ;
		
		if(first == 'R') {
			start = (start + value) % 100 ;
		}
		else if(first == 'L') {
			start = (start - value + 100) % 100 ;
		}

		if(start == 0) ans ++ ;
	} 
	
	cout << ans << endl ;
	return 0 ;	
}
