#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> req;
	vector<int> avl;
	for(int i = 0; i < n; i++){
		int r;
		cin >> r;
		req.push_back(r);
	}
	for(int i = 0; i < m; i++){
		int a;
		cin >> a;
		avl.push_back(a);
	}

	std::sort(req.begin(), req.end());
	std::sort(avl.begin(), avl.end());

	// for(int i = 0; i < req.size(); i++){
	// 	cout << req[i] << " ";
	// }
	// cout << endl;

	int count = 0;

	int i, j;
	i = 0;
	j = 0;
	while(i < n && j < m){
		if(req[i] <= avl[j]+k && req[i] >= avl[j]-k){
			count += 1;
			i += 1;
			j += 1;
		}
		else{
			if(req[i] > avl[j]){
				j += 1;
			}
			else{
				i += 1;
			}
			
		}
	}

	cout << count << "\n";
}