#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;
	vector<pair<int, int>> v_p;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		v_p.push_back(make_pair(x, 1));
		v_p.push_back(make_pair(y, -1));
	}

	sort(v_p.begin(), v_p.end());

	int c = 0, m = 0;
	for(auto it: v_p){
		if(it.second == 1){
			c += 1;
			m = c>m?c:m;
		}
		else{
			c -= 1;
		}
	}

	cout << m << "\n";
}