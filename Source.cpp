#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;


void OpenFile(char *Line,int nLine,char *name) {
	char element;
	FILE * fRead;
	if ((fRead = fopen(name, "r")) == NULL) {
		cerr << "Помилка!!!" << endl;
		exit(1);
	}
	else cout << "Файл вiдкрився для зчитування iнформацiї\nВмiст файла\n";
	element = getc(fRead);
	
	while (element != EOF) {
		cout << element;
		Line[nLine] = element;
		element = getc(fRead);
		nLine++;
	}
	
	fclose(fRead);
}



int main() {
	setlocale(LC_CTYPE, "ukr");
	char Line[100];
	int nLine = 0;
	FILE * fWrite;

	char fName[61]="1.txt";
	//cout << "Enter fole name: ";
	//cin.getline(fName, 61);
	//Відкриваємо файл
	OpenFile(Line,nLine,fName);

	/*if ((fWrite = fopen(fName, "w")) == NULL) {
		cerr << "Помилка";
		exit(1);
	}*/
	/*for (int i = 0; i < f + k; i++) {
		putc(fo[i], fWrite);
	}*/
	
	//fclose(fWrite);


	
	_getch();
	return 0;
}