#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int vector_sum = 0;
	for(auto num: arr){
		vector_sum += num;
	}

	int i = 0, j = n-1, curr_sum = vector_sum, count = 0;

	while(i < n && j >= i){
		if(curr_sum > x){
			
		}
		
	}

	cout << count;

}

