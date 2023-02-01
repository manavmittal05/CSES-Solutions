#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	multimap<int, pair<int, int>> twoSum;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			twoSum.insert(make_pair(arr[i]+arr[j], make_pair(i+1, j+1)));
		}
	}

	bool found = false;

	for(auto iter: twoSum){
		auto val = twoSum.lower_bound(x-iter.first);
		if(val != twoSum.end() && val->first+iter.first == x && val->second.first != iter.second.first && val->second.second != iter.second.second && val->second.first != iter.second.second && val->second.second != iter.second.first){
			found = true;
			cout << iter.second.first << " " << iter.second.second << " " << val->second.first << " " << val->second.second;
			break;
		}

	}

	if(!found){
		cout << "IMPOSSIBLE";
	}
}