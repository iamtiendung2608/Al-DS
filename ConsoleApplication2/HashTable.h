#ifndef HashTable_H
#define HashTable_H
#include<vector>
#include"Row.h"
using namespace std;
class HashTable {
	vector<vector<Row>>obj;
	Row FieldName;
	string Name;//
public:
	HashTable() {
		for (int i = 0;i < 31;i++) {
			obj.push_back(vector<Row>());
		}
		Name = "";
		FieldName = NULL;
	}
	int HashFunction(int key) {
		return key % 31;
	}
	void Insert(int key, Row value) {
		obj.at(HashFunction(key)).push_back(value);
	}
	Row Search(int key) {
		for (int i = 0;i < (int)obj.at(HashFunction(key)).size();i++) {
			if (obj.at(HashFunction(key)).at(i).getID() == key)
				return obj.at(HashFunction(key)).at(i);
		}
		return Row(key);
	}
	void setName(string name) {
		this->Name = name;
	}
	void setField(Row fieldname) {
		this->FieldName = fieldname;
	}
	string getName() {
		return this->Name;
	}
	Row getField() {
		return this->FieldName;
	}
	vector<Row>Select() {
		vector<Row>Result;
		for (int i = 0;i < 31;i++) {
			if (obj.at(i).size() != 0) {
				for (int j = 0;j <(int) obj.at(i).size();j++)
					Result.push_back(obj.at(i).at(j));
			}
		}
		return Result;
	}
};
#endif // !HashTable_H
