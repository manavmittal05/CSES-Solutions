#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		arr[i] = x;
	}

	for(int i = 1; i < n; i++){
		arr[i] = arr[i]^arr[i-1];
	}

	for(int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		if(a == 1){
			cout << arr[b-1] << "\n";
		}
		else{
			int temp = arr[b-1]^arr[a-2];
			cout << temp << "\n";
		}
		
	}
}