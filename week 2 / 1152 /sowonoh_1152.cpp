#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	getline(cin, word);    //cin>>word;는 공백입력 못받음, getline(cin, word): 공백포함해서 입력받기

	int count = 0;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] != ' ' && (i == 0 || word[i - 1] == ' ')) {  //현재 문자가 공백이 아니면서 직전문자가 공백이어야 단어 count함
			count++;
		}
	}
	cout << count;
}
