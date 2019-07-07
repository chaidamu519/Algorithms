#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;


int main() {

	char s1[500] = {0}, word[500] = {0};
	cin.getline(s1, 500);
	int i = 0;
	int pos1 = 0, pos2 = 0, len = 0, flag = 0;
	for (int i = 0; i < 500; i++) {

		if (s1[i] == ' ' || s1[i] == '.') {
			pos2 = i;
			if (len < (pos2 - pos1)) {
				len = pos2 - pos1;
				flag = pos1;
				for (int k = 0; k < len; k++) {
					word[k] = s1[flag + k];
				}
				pos1 = pos2 + 1;
			}
			else {
				pos1 = pos2 + 1;
			}
		}
	} 

	cout << word;
	

}
