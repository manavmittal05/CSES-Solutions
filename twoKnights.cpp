#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int a, b;
		cin >> a >> b;
		if((a == 0 && b != 0) || (a != 0 && b == 0)){
			cout << "NO" << "\n";
			continue;
		}
		if((2*a - b)%3 == 0 && (2*b - a)%3 == 0 && 2*b>=a && 2*a>=b){
			cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
	}
}