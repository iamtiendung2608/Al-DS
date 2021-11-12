#ifndef MainDatabase_H
#define MainDatabase_H
#include"HashTable.h"
#include"Row.h"
#include"Column.h"
using namespace std;
HashTable Table;
void Create() {
	cout << "Create Table Name: ";
	string Name;
	getline(cin, Name);
	Table.setName(Name);
	cout << "Input number of field: ";
	int n;
	cin >> n;
	cin.ignore();
	Row field;
	for (int i = 0;i < n; i++) {
		Column col;
		cin >> col;
		field.AddField(col);
	}
	Table.setField(field);
	cout << "Create Table: " + Name << endl;
}
void Insert() {
	Row field=Table.getField();
	Row Data;
	for (int i = 0;i < Table.getField().getSize();i++) {
		cout << field.getFieldName(i);
		Column col;
		cin >> col.value;
		Data.AddField(col);
	}
	int ID = std::stoi(Data.getField().at(0).value);
	Table.Insert(ID, Data);
	cout << "Insert into table: " + Table.getName() << endl;
	cin.ignore();
}
void Select() {
	Row Name = Table.getField();
	cout << Name << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << '\n';
	vector<Row> All = Table.Select();
	for (int i = 0;i <(int) All.size();i++)
		cout << All.at(i) << endl;
}

#endif // !MainDatabase_H
