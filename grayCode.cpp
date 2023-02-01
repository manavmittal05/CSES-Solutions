#include <bits/stdc++.h>
using namespace std;

vector<int> decimalToBinary(int n, int bits){
	vector<int> bin;
	for (int i = bits; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            bin.push_back(1);
        else
            bin.push_back(0);
    }
    return bin;
}

int main(){
	int n;
	cin >> n;
	vector<int> bin;
	int l = (int)(pow(2, n) + 0.5);
	for(int i = 0; i < l; i++){
		bin = decimalToBinary(i, n-1);
		cout << endl;
		cout << bin[0];
		for(int j = 1; j < n; j++){
			cout << (bin[j-1]^bin[j]);
		}
		cout << "\n";


	}

}