#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin >> n >> q;
	vector<long long int> arr;
	for(int i = 0; i < n; i++){
		long long int x;
		cin >> x;
		arr.push_back(x);
	}

	for(int i = 1; i < n; i++){
		arr[i] += arr[i-1];
	}

	for(int i = 0; i < q; i++){
		int c, a, b;
		cin >> c >> a >> b;
		if(c == 1){
			if(a == 1){
				int diff = b-arr[a-1];
				arr[a-1] = b;
				for(int j = a; j < n; j++){
					arr[j] += b;
				}
			}
			else{
				int diff = arr[a-1]-arr[a-2]-b;
				arr[a-1] = arr[a-2]+b;
				for(int j = a; j < n; j++){
					arr[j] -= diff;
				}
			}
			
		}
		else{
			if(a == 1){
				cout << arr[b-1] << "\n";
			}
			else{
				cout << arr[b-1]-arr[a-2] << "\n";
			}
		}
		// for(int i = 0; i < n; i++){
		// 	cout << arr[i] << " ";
		// }
		// cout << endl;
	}
	

}