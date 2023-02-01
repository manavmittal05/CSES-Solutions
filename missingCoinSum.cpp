#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	vector<int> arr(x);
	for(int i = 0; i < x; i++){
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	long long int ans = 1;
	for(auto num: arr){
		if(ans < num){
			break;
		}
		else{
			ans += num;
		}
	}
	cout << ans;
}