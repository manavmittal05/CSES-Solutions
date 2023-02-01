#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<pair<int,int>> arr;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.insert(make_pair(temp,i));
	}

	int count = 0;
	auto iter1 = arr.begin();
	for(int i = 1; i <= n; i++){
		auto iter2 = arr.lower_bound(make_pair(i,n));
		if(iter2->second <= iter1->second){
			count += 1;
		}
		arr.erase(iter1);
		iter1=iter2;
	}
	cout << count;
}