#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	multiset<int> tickets;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		tickets.insert(t);
	}
	for(int i = 0; i < m; i++){
		int t;
		cin >> t;
		auto it = tickets.upper_bound(t);
		if(it == tickets.begin()){
			cout << -1 << "\n";
		}
		else{
			cout << *(--it) << "\n";
			tickets.erase(it);
		}

	}


}