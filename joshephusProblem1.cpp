#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> arr;
	for(int i = 0; i < n; i++){
		arr.insert(i+1);
	}

	for(auto iter: arr){
		cout << iter << " ";
	}

	auto it = arr.begin();
	it++;
	while(!arr.empty()){
		// auto it1 = next(it);
		// auto it2 = next(it1);
		// if(it1 == arr.end()){
		// 	it = next(arr.begin());
		// }
		// else if(it2 == arr.end()){
		// 	it = arr.begin();
		// }
		// else{
			cout << *it << " ";
			int iter = *it;
			it++;
			it++;
			arr.erase(iter);
			// auto it3 = it;
			// // it++;
			// // it++;
			// arr.erase(it3);
			// it++;
			
		// }
	}

}