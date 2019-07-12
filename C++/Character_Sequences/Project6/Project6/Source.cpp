#include<iostream>
#include<string.h>
#include <iomanip> 
using namespace std;


int main() {

	int n, m;
	int data[100];
	int temp;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		if (i < n - m) {
			cin >> temp;
			data[m + i] = temp;
		}
		else {
			cin >> temp;
			data[i - n + m] = temp;
		}
	}
	



	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	


}