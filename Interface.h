#pragma once
#include <iostream>
#include <stdio.h>

#include <vector>

using namespace std;

void OutputLine(vector<char> line) {
	cout << "Файл вiдкрився для зчитування iнформацiї.\nВміст файла:" << endl;
	for (int i = 0; i < line.size(); i++) {
		cout <<line[i];
	}
}

void OutputLeftRightLine(vector<char> lineLeft, vector<char> lineRight, char symbol) {
	cout << "\nВміста файла до першого входження символа '" << symbol<<"':\n";
	for (int i = 0; i < lineLeft.size(); i++) {
		cout << lineLeft[i];
	}
	cout << "\nВміста файла після першого входження символа '" <<symbol<< "':\n";
	for (int i = 0; i < lineRight.size(); i++) {
		cout << lineRight[i];
	}
}