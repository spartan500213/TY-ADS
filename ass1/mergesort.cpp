#include <bits/stdc++.h>
using namespace std;

void load_arr(int l, int r, vector<int> &arr, int level, vector<vector<vector<int>>> &ans) {
	
}

int getmid(int l, int r) {
	return (l + (l + r)) / 2
}

void mergesort(int l, int r) {
	if(r - l <= 1) {

	}
		
}

int main(int argc, char **argv) {
	int size = argc - 1;
	int level = 0;
	vector<int> arr(size);
	vector<vector<vector<int>>>
	//reading the array
	for(int i = 0; i < size; i++) {
		arr[i] = stoi(argv[i + 1]);
	}:wq


	//mergesort
	int l = 0, r = size - 1;
	int m = getmid(l, r);
	mergesort(l, m);
	mergesort(m + 1, r);
	return 0;
	
}
