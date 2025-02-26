#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
	string studentName;
	double studentGrade;

	map<string, double> studentGrades;

	// Students' grades (pre-entered)
	studentGrades.emplace("Joe", 84.3);
	studentGrades.emplace("Sue", 91.0);
	studentGrades.emplace("Bart", 78.6);
	studentGrades.emplace("Kevin", 65.4);
	studentGrades.emplace("Fred", 98.2);

	cout << "Please enter the student you are looking for: ";
	cin >> studentName;
	cout << studentName << "'s original grade: " << studentGrades.at(studentName) << endl;
	cout << "Please enter a new grade for " << studentName << ": ";
	cin >> studentGrade;
	studentGrades.erase(studentName);
	studentGrades.emplace(studentName, studentGrade);

	cout << "This is the new grade for " << studentName << ": " << studentGrades.at(studentName);
	// TODO: Read in new grade for a student, output initial
	//       grade, replace with new grade in map,
	//       output new grade


	return 0;
}