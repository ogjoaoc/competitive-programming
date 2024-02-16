// Selection Sort 
// (O(n^2))

#include <bits/stdc++.h>

using namespace std;


void selection(int v[], int l, int r) {

	for (int i = l; i < r; i++) {

		int min = i;

		for (int j = i+1; j < r; j++) {

			if (v[j] < v[min]) {
				swap(v[j], v[min]);
			}

		}

	}

}

int main() { 
	
	int v[7] = { 3, 32, 10, 5, 14, 0, 1 };

	// for (int i = 0; i < 10; i++) {
	// 	v[i] = rand();
	// }

	for (int j = 0; j < 7; j++) {
		cout << v[j] << " ";
	} cout << "\n";

	selection(v, 0, 7);

	cout << "\n";

	for (int j = 0; j < 7; j++) {
		cout << v[j] << " ";
	} cout << "\n";

    return 0;

}