#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	multiset<int> vals;
	for(int i = 0; i < n; i++){
		auto iter = vals.upper_bound(arr[i]);
		if(iter == vals.end()){
			vals.insert(arr[i]);
		}
		else if(*iter <= arr[i]){
			vals.insert(arr[i]);
		}
		else{
			vals.erase(iter);
			vals.insert(arr[i]);
		}

	}

	cout << vals.size();

}