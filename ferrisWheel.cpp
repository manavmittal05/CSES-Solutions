#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> weights;
	for(int i = 0; i < n; i++){
		int w;
		cin >> w;
		weights.push_back(w);
	}

	sort(weights.begin(), weights.end());

	int i, j, count;
	i = 0;
	j = n-1;
	count = 0;
	while(i <= j){
		if(weights[j] < x && weights[j] + weights[i] <= x){
			i++;
		}
		j--;
		count += 1;
	}
	cout << count << endl;
}