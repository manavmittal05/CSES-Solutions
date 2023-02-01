#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n >> x;
	multiset<int> m;
	set<int> arr;
	arr.insert(0);
	arr.insert(n);
	m.insert(n-0);
	for(int i = 0; i < x; i++){
		int t;
		cin >> t;
		arr.insert(t);
		auto it = arr.find(t);
		int lb = *(prev(it));
		int ub = *(next(it));

		m.erase(m.find(ub-lb));
		m.insert(t-lb);
		m.insert(ub-t);

		cout << *(m.rbegin()) << " ";
	}


}