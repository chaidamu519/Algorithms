#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;


int main() {

	char s1[80], s2[80];
	char result;
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	int i = 0;
	while (s1[i] != '\0' && (tolower(s1[i]) == tolower(s2[i]))) {
		i++;
	}
	if (tolower(s1[i]) > tolower(s2[i])) {
		result = '>';
	}
	else if (tolower(s1[i]) < tolower(s2[i])) {
		result = '<';
	}
	else {
		result = '=';
	}

	cout << result;

}
