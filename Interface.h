#pragma once
#include <iostream>
#include <stdio.h>

#include <vector>

using namespace std;
//���� ������ ����� �����
void OutputLine(vector<char> line) {
	cout << "���� �i������� ��� ���������� i�������i�.\n��i�� �����:" << endl;
	for (int i = 0; i < line.size(); i++) {
		cout <<line[i];
	}
}
//���� ��� � ����� �������� ������
void OutputLeftRightLine(vector<char> lineLeft, vector<char> lineRight, char symbol) {
	cout << "\n\n\t\t��i��� ����� �� ������� ��������� ������� '" << symbol<<"':\n";
	for (int i = 0; i < lineLeft.size(); i++) {
		cout << lineLeft[i];
	}
	cout << "\n\n\t\t��i��� ����� �i��� ������� ��������� ������� '" <<symbol<< "':\n";
	for (int i = 0; i < lineRight.size(); i++) {
		cout << lineRight[i];
	}
	cout << endl;
}