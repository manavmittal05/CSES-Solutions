#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<pair<int,int>> arr;
	for(int i = 0; i < n; i++){
		int t1;
		cin >> t1;
		arr.push_back(make_pair(t1, i+1));
	}

	sort(arr.begin(), arr.end());

	vector<int> vals(3);
	bool found = false;
	for(int i = 0; i < n; i++){
		if(found){
			break;
		}
		for(int j = i+1; j < n; j++){
			int val = x - (arr[i].first + arr[j].first);
			auto iter = lower_bound(arr.begin(), arr.end(), make_pair(val, 0));
			if(iter->first == val && iter->second != arr[i].second && iter->second != arr[j].second && iter != arr.end()){
				vals[0] = arr[i].second;
				vals[1] = arr[j].second;
				vals[2] = iter->second;
				found = true;
				break;
			}
		}
	}
	if(found){
		cout << vals[0] << " " << vals[1] << " " << vals[2] << "\n";
	}
	else{
		cout << "IMPOSSIBLE" << "\n";
	}
}