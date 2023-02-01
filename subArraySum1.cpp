#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int i = 0, j = 0;
	int curr_sum = 0, count = 0;
	while(i < n && j < n){
		// curr_sum += arr[j];
		if(curr_sum + arr[j] == x){
			count += 1;
			curr_sum -= arr[i];
			curr_sum += arr[j];
			i++;
			j++;
		}
		else if(curr_sum + arr[j] > x){
			curr_sum -= arr[i];
			i++;
		}
		else{
			curr_sum += arr[j];
			j++;
		}
	}

	cout << count;
}