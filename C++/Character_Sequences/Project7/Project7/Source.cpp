#include<iostream>
#include<string.h>
#include <iomanip> 
using namespace std;


int main() {

	int N;
	int output[15000] = {0};
	int data[15000];
	int p = 0, p1 = 0, p2 = 0;
	int mid;
	int a = 0;
	int temp;

	while (cin >> N) {

		if (N == 0) {
			break;
		}
		int sum = 0;

		for (int i = 0; i < N; i++) {
			cin >> data[i];
		}
		if (N == 1) {
			output[a] = data[0];
		}
		else if (N == 2) {
			output[a] = (data[0] + data[1]) / 2;
		}
		else {

			for (int i = 0; i < N - 1; i++) {
				for (int j = 1; j < N - i; j++) {
					if (data[j - 1] > data[j]) {
						temp = data[j];
						data[j] = data[j - 1];
						data[j - 1] = temp;
					}
				}
			}

			if (N % 2 == 0) {
				output[a] = (data[N / 2 - 1] + data[N / 2]) / 2;
			}
			else {
				output[a] = (data[(N - 1) / 2]);
			}

		}
		a++;
	} 

	for (int i = 0; i < a; i++) {
		cout << output[i] << endl;
	}



}