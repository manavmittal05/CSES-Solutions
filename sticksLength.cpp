#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector<int> arr;
	unordered_map<int,int> m;
	for(int i = 0; i < n; i++){
		cin >> x;
		m[x] = 0;
		arr.push_back(x);
	}

	sort(arr.begin(), arr.end());

	for(int i = 0; i < n; i++){
		arr[i] += 1;
	}

	int mid = n/2;
	if(n%2 == 0){
		mid = (m[mid]>m[(mid-1)])?mid:(mid-1);
	}

	long long              cost = 0;
	for(int i = 0; i < n; i++){
		cost += abs(arr[i]-arr[mid]);
	}

	cout << cost;

}