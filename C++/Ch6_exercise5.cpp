#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
	string name;
	double marks;

public:
	Student() : name{""}, marks{0.0} {}

	Student(string n, double m) : name{n}, marks{m} {}

	double getMarks() { return marks; }

	string getName() { return name; }
};

bool compare(Student& x, Student& y) {
	return x.getMarks() > y.getMarks();
}

int main()
{
	int size;
	string name;
	double marks;

	cout << "학생 수: ";
	cin >> size;

	vector<Student> vec(size);

	for (auto& e : vec) {
		cout << "학생 이름: ";
		cin >> name;

		cout << "학생 학점: ";
		cin >> marks;

		e = Student(name, marks);
	}

	sort(vec.begin(), vec.end(), compare);

	cout << "\n===============================\n";
	for (auto& e : vec) {
		cout << "이름 : " << e.getName() << endl;
		cout << "학점 : " << e.getMarks() << endl;
	}
	cout << "===============================";

	return 0;
}