#include<iostream>
#include<string.h>
#include <iomanip> 
using namespace std;


int main() {

    int N;
	cin >> N;
	int cells[255][255];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> cells[i][j];
		}
	}

	int number_disease = 0;
	int up, down, right, left;

	for (int i = 1; i < N - 1; i++) {
		for (int j = 1; j < N - 1; j++) {
			up = cells[i - 1][j] - cells[i][j];
			down = cells[i + 1][j] - cells[i][j];
			right = cells[i][j + 1] - cells[i][j];
			left = cells[i][j - 1] - cells[i][j];

			if (up >= 50 && down >= 50 && left >= 50 && right >= 50) {
				number_disease++;
			}
		}
	}
	cout << number_disease;



}