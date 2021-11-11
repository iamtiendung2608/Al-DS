#ifndef Column_HEADER
#define  Column_HEADER
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

class Column {
public:
	string name;
	string value;
	bool ID;
	Column(string m_name, string m_value, bool m_ID) {
		name = m_name;
		value = m_value;
		ID = m_ID;
	}
	Column() {}
};
std::istream& operator>>(std::istream& in, Column& col) {
	cout << "Nhap Field: ";
	getline(in, col.name);
	cout << "Nhap Value: ";
	getline(in, col.value);
	col.ID = false;
	return in;
}
std::ostream& operator<<(std::ostream& out, const Column& col) {
	out << setw(22) << left << col.value;
	return out;
}


#endif // !Column_HEADER
