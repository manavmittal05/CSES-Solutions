#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<pair<int,int>> arr;
	for(int i = 0; i < n; i++){
		int x,y;
		cin >> x >> y;
		arr.insert(make_pair(x,y));
	}

	for(auto iter: arr){
		// cout << iter.first << " " << iter.second << "\n";
		auto it1 = arr.upper_bound(make_pair(iter.first, iter.second));
		auto it2 = arr.lower_bound(make_pair(iter.first, iter.first));
		if(it1->second < iter.second && it1 != arr.end()){
			cout << 1 << " ";
		}
		if(it2->second < iter.second && it2 != arr.end()){
			cout << 1 << " ";
		}
		else{
			cout << 0 << " ";
		}
	}
}