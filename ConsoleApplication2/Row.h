#ifndef Row_H
#define Row_H
#include<vector>
#include"Column.h"
using namespace std;
class Row {
	vector<Column>field;
	//int ID
public:
	Row() {}
	void AddField(Column value) {
		field.push_back(value);
	}
	int getSize() {
		return field.size();
	}
	vector<Column>getField() {
		return field;
	}
	void Clear() {
		field.clear();
	}
};
std::ostream& operator<<(std::ostream& out,  Row& row) {
	for (int i = 0; i < row.getField().size();i++) {
		out << row.getField().at(i);
	}
	return out;
}
#endif // !Row_H
