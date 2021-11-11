#ifndef HashTable_H
#define HashTable_H
#include<vector>
#include"Row.h"
using namespace std;
template<class T>
class HashTable {
	vector<vector<T>>obj;
	Row Name;
	//string Name: 
	//path: Name.txt
public:
	HashTable() {
		for (int i = 0;i < 31;i++) {
			obj.push_back(vector<T>());
		}
	}
	int HashFunction(int key) {
		return key % 31;
	}
	void Insert() {
		
	}
	void setName(Row name) {
		this->Name = name;
	}
};
#endif // !HashTable_H
