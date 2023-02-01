#include <bits/stdc++.h>
using namespace std;

bool sortUsingSecond(pair<int,int> &p1, pair<int,int> &p2){
	return (p1.second < p2.second);
}

int main(){
	int n, a, b;
	cin >> n;
	vector<pair<int,int>> arr;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}

	sort(arr.begin(), arr.end(), sortUsingSecond);

	int count = 1;
	int index = 0;

	for(int i = 1; i < arr.size(); i++){
		if(arr[i].first >= arr[index].second){
			count += 1;
			index = i;
		}
	}
	cout << count;

}