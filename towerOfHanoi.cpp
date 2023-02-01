#include <bits/stdc++.h>
using namespace std;

int number_of_moves = 0;

void solveHanoi(int n, int start, int middle, int end, vector<pair<int,int>> &moves){
	if(n == 0){
		return;
	}
	solveHanoi(n-1, start, end, middle, moves);
	moves.push_back(make_pair(start, end));
	number_of_moves += 1;
	solveHanoi(n-1, middle, start, end, moves);
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> moves;

	solveHanoi(n, 1, 2, 3, moves);

	cout << number_of_moves << "\n";
	for(auto it: moves){
		cout << it.first << " " << it.second << "\n";
	}
}