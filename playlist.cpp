#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	map<int, int> index_map;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		index_map.insert(make_pair(arr[i], -1));
	}

	int max_count = 1;
	int i = 0;
	int count = 0;
	while(i < n){
		if(index_map[arr[i]] == -1 || index_map[arr[i]] < i-count){
			index_map[arr[i]] = i;
			count += 1;
			i++;
		}
		else{
			count = i - index_map[arr[i]] - 1;
			index_map[arr[i]] = -1;
		}
		max_count = count>max_count?count:max_count;
	}

	cout << max_count;

}