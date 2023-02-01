#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, a;
	cin >> n >> x;
	vector<pair<int, int>> arr;
	for(int i = 0; i < n; i++){
		cin >> a;
		arr.push_back(make_pair(a, i));
	}

	sort(arr.begin(), arr.end());

	bool found = false;
	pair<int,int> p1, p2;
	for(int i = 0; i < n; i++){
		auto lb = lower_bound(arr.begin(), arr.end(), make_pair(x-arr[i].first, 0));	
		if(x-arr[i].first == lb->first && i!=lb-arr.begin()){
			p1 = arr[i];
			p2 = *lb;
			found = true;
			break;
		}
	}
	if(!found){
		cout << "IMPOSSIBLE";
	}
	else{
		cout << p1.second+1 << " " << p2.second+1;
	}
}