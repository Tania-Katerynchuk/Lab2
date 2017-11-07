#pragma once
#include <iostream>
#include <stdio.h>

#include <vector>

using namespace std;
//вивід стрічки даних файла
void OutputLine(vector<char> line) {
	cout << "Файл вiдкрився для зчитування iнформацiї.\nВмiст файла:" << endl;
	for (int i = 0; i < line.size(); i++) {
		cout <<line[i];
	}
}
//вивід лівої і правої ччастини стрічки
void OutputLeftRightLine(vector<char> lineLeft, vector<char> lineRight, char symbol) {
	cout << "\n\n\t\tВмiста файла до першого входження символа '" << symbol<<"':\n";
	for (int i = 0; i < lineLeft.size(); i++) {
		cout << lineLeft[i];
	}
	cout << "\n\n\t\tВмiста файла пiсля першого входження символа '" <<symbol<< "':\n";
	for (int i = 0; i < lineRight.size(); i++) {
		cout << lineRight[i];
	}
	cout << endl;
}