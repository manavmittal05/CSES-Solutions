#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		arr[i] = {t, i+1};
	}
	stack<pair<int,int>> s;

	for(int i = 0; i < n; i++){
		if(s.empty()){
			cout << 0 << " ";
		}
		else if(s.top().first < arr[i].first){
			cout << s.top().second << " ";
		}
		else{
			i -= 1;
			s.pop();
			continue;
			
		}
		s.push(arr[i]);

	}
}