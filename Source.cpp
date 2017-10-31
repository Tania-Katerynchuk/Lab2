#define _CRT_SECURE_NO_WARNINGS
#include "Interface.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

bool OpenFile(vector<char>& line);
void ParseLine(vector<char> line, vector<char>& lineLeft, vector<char>& lineRight, char symbol);
bool OpenFile(vector<char>& line) {
	char fileName[61] = "1.txt";
	//cout << "Enter fole name: ";
	//cin.getline(fName, 61);
	char element;
	FILE * fRead;
	if ((fRead = fopen(fileName, "r")) == NULL) {
		cerr << "Помилка!!!" << endl;
		return false;
	}
	element = getc(fRead);
	while (element != EOF) {
		line.push_back(element);
		element = getc(fRead);
	}
	fclose(fRead);
	return true;
}

void ParseLine(vector<char> line, vector<char>& lineLeft, vector<char>& lineRight, char symbol) {
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == symbol) {
			for (int k = 0; k < i; k++) {
				lineLeft.push_back(line[k]);

			}
			for (int k = i + 1; k < line.size(); k++) {
				lineRight.push_back(line[k]);
			}
			break;
		}
	}
}

void WriteLeftLine(vector<char> line, char fileName[61]) {
	FILE * fWrite;
	if ((fWrite = fopen(fileName, "w")) == NULL) {
		cerr << "Помилка";
		exit(1);
	}
	for (int i = 0; i < line.size(); i++) {
		putc(line[i], fWrite);
	}
	fclose(fWrite);
}



int main() {
	setlocale(LC_CTYPE, "ukr");
	vector<char> line;
	//Відкриваємо файл
	if (OpenFile(line)) {
		OutputLine(line);
		vector<char> lineLeft;
		vector<char> lineRight;
		char symbol = 'c';
		ParseLine(line, lineLeft, lineRight, symbol);
		OutputLeftRightLine(lineLeft, lineRight, symbol);
		WriteLeftLine(lineLeft, "LeftLine.txt");
		WriteLeftLine(lineRight, "RightLine.txt");
	}




	_getch();
	return 0;
}