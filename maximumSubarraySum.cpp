#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n;
	vector<int> vec;
	for(int i = 0; i < n; i++){
		cin >> x;
		vec.push_back(x);
	}
	long long int msum = INT_MIN, csum = 0;
	for(int i = 0; i < n; i++){
		csum += vec[i];
		msum = csum>msum?csum:msum;
		if(csum < 0){
			csum = 0;
		}
	}
	cout << msum;
}