#include <iostream>

//Build the vigenere cipher 2d array


using namespace std;

char** BuildVigenere(){
	char ** temp = new char*[26];
	for(int i=0;i<26;i++){
		temp[i] = new char[26];
		for(int j=0;j<26;j++){
			temp[i][j] = char(((j+i)%26)+65);
		}
	}
	return temp;
}

void main(){
	char **VigenereArray;
	char x;
	VigenereArray = BuildVigenere();

	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			cout<<VigenereArray[i][j];
		}
		cout<<endl;
	}
	system("pause");
}