// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"HashTable.h"
#include"Row.h"
#include"Column.h"
#include<vector>
using namespace std;
int main()
{
	vector<Row>Table;
	//int id
	Row Data;
	int n;
	cout << "Nhap so field: ";
	cin >> n;
	cin.ignore();
	for (int i = 0;i < n;i++) {
		Column k;
		cin >> k;
		Data.AddField(k);
	}
	Table.push_back(Data);
	Data.Clear();
	while (true)
	{
		cout << "Input Command: ";
		string command;
		getline(cin, command);
		if (command._Equal("Insert")) {
			for (int i = 0;i < n;i++) {
				Column k;
				cin >> k;
				Data.AddField(k);
			}
			Table.push_back(Data);
			Data.Clear();
		}
		else {
			for (int i = 0;i < Table.size();i++)
				cout << Table.at(i)<<endl;
			break;
		}
		cout << '\n';
	}
}

