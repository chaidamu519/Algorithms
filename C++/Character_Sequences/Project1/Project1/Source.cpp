#include<iostream>
#include<string.h>
using namespace std;


int main() {

	char phrase[80];
	cin.getline(phrase, 80);
	int aa(0), ee(0), ii(0), oo(0), uu(0);

	for (int i = 0; i < strlen(phrase);i++) {

		switch (phrase[i])
		{
		case 'a': aa++; break;
		case 'e': ee++; break;
		case 'i': ii++; break;
		case 'o': oo++; break;
		case 'u': uu++; break;
		   
		}
	}

	cout << aa << " " << ee << " " << ii << " " << oo << " " << uu << " ";

}