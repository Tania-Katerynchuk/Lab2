#pragma once
#include <iostream>
#include <stdio.h>

#include <vector>

using namespace std;

void OutputLine(vector<char> line) {
	cout << "���� �i������� ��� ���������� i�������i�.\n���� �����:" << endl;
	for (int i = 0; i < line.size(); i++) {
		cout <<line[i];
	}
}

void OutputLeftRightLine(vector<char> lineLeft, vector<char> lineRight, char symbol) {
	cout << "\n����� ����� �� ������� ��������� ������� '" << symbol<<"':\n";
	for (int i = 0; i < lineLeft.size(); i++) {
		cout << lineLeft[i];
	}
	cout << "\n����� ����� ���� ������� ��������� ������� '" <<symbol<< "':\n";
	for (int i = 0; i < lineRight.size(); i++) {
		cout << lineRight[i];
	}
}